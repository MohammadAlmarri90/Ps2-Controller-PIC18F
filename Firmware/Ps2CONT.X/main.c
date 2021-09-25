/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F25K42
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"

/*Defines*/
#define SS PORTAbits.RA5
//#define start 1
//#define select 1
//#define up 1
//#define down 1
//#define left 1
//#define right 1
//#define triangle 1
//#define circle 1
//#define cross 1
//#define square 1
//#define L1 1
//#define L2 1
//#define R1 1
//#define R2 1

/*Variables*/
int counter = 0;
unsigned char buttons1 = 0;
unsigned char buttons2 = 0;
char parseIndex = 0;
char recievedUpdate = 0;
int timeoutCounter = 0;

struct buttonbits1
{
    unsigned  char select    :1;
    unsigned  char JOYR      :1;
    unsigned  char JOYL      :1;
    unsigned  char start     :1;
    unsigned  char up        :1;
    unsigned  char right     :1;
    unsigned  char down      :1;
    unsigned  char left      :1;
 
};
struct buttonbits1 param1;  // data byte one of button presses.
struct buttonbits2
{
    unsigned  char L2        :1;
    unsigned  char R2        :1;
    unsigned  char L1        :1;
    unsigned  char R1        :1;
    unsigned  char triangle  :1;
    unsigned  char circle    :1;
    unsigned  char cross     :1;
    unsigned  char square    :1;
 
};
struct buttonbits2 param2;  // data byte two of button presses. 
    
/*declerations*/
void updateButtons();
unsigned char spiexchange(unsigned char transfer, bool ACK);
unsigned int reverseBits(unsigned int num);


void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    SPI1_Open(SPI1_DEFAULT);
    __delay_ms(200);            //time for the spi to start
    char cmd = 0;                   //A variable to store whatever we receive from the psx.

    while (1)
    {
idle:        
        
        if(SS)
        {
            //we do all the button readings here
            updateButtons();
            goto idle;
        }
        
        cmd = spiexchange(0xff,1);

        
        
        if(cmd == 0x01)
        {
        cmd = spiexchange(0x41, 1);
        }
        
        if(cmd == 0x42)
        {
            spiexchange(0x5A, 1);
        }
        
        
        spiexchange(buttons1,1);
        spiexchange(buttons2,0);
        
//finish:
    ACK_SetHigh();
    if(!SS)
    {
        __delay_us(50);
    }

    }
}


/*Functions*/

//Reads all the button changes, updates 60 times a second
void updateButtons()
{
    if(R2_GetValue())       /*Button presses are 1 for unpressed and 0 for pressed*/
    {
        param2.R2 = 1;
    }else
    {
        param2.R2 = 0;
    }
    if(L2_GetValue())
    {
        param2.L2 = 1;
    }else
    {
        param2.L2 = 0;
    }
    if(R1_GetValue())
    {
        param2.R1 = 1;
    }else
    {
        param2.R2 = 0;
    }
    if(L1_GetValue())
    {
        param2.L1 = 1;
    }else
    {
        param2.L1 = 0;
    }
    if(CROSS_GetValue())
    {
        param2.cross = 1;
    }else
    {
        param2.cross = 0;
    }
    if(CIRCLE_GetValue())
    {
        param2.circle = 1;
    }else
    {
        param2.circle = 0;
    }
    if(TRIANGLE_GetValue())
    {
        param2.triangle = 1;
    }else
    {
        param2.triangle = 0;
    }
    if(SQUARE_GetValue())
    {
        param2.square = 1;
    }else
    {
        param2.square = 0;
    }
    if(SELECT_GetValue())
    {
        param1.select = 1;
    }else
    {
        param1.select = 0;
    }
    if(START_GetValue())
    {
        param1.start = 1;
    }else
    {
        param1.start = 0;
    }
    if(UP_GetValue())
    {
        param1.up = 1;
    }else
    {
        param1.up = 0;
    }
    if(DOWN_GetValue())
    {
        param1.down = 1;
    }else
    {
        param1.down = 0;
    }
    if(LEFT_GetValue())
    {
        param1.left = 1;
    }else
    {
        param1.left = 0;
    }
    if(RIGHT_GetValue())
    {
        param1.right = 1;
    }else
    {
        param1.right = 0;
    }
    
    buttons1 = (param1.left << 7) | (param1.down << 6) | (param1.right << 5) | (param1.up << 4) | (param1.start << 3) | param1.select;
    buttons2 = (param2.square << 7) | (param2.cross << 6) | (param2.circle << 5) | (param2.triangle << 4) | (param2.R1 << 3) | (param2.L1 << 2) | (param2.R2 << 1) | param2.L2;
    
}


unsigned char spiexchange(unsigned char transfer, bool ACK)
{
    //Action is coming
    unsigned char receive = 0;
    ACK_SetHigh();
    receive = SPI1_ExchangeByte(transfer);
    SPI1STATUSbits.CLRBF = 1;
    if(ACK)
    {
        __delay_us(20);
        ACK_SetLow();
        __delay_us(2.5);
        ACK_SetHigh();
    }
    return receive;
}

unsigned int reverseBits(unsigned int num)
{
    unsigned int  NO_OF_BITS = sizeof(num) * 8;
    unsigned int reverse_num = 0, i, temp;
  
    for (i = 0; i < NO_OF_BITS; i++)
    {
        temp = (num & (1 << i));
        if(temp)
            reverse_num |= (1 << ((NO_OF_BITS - 1) - i));
    }
   
    return reverse_num;
}

/**
 End of File
*/