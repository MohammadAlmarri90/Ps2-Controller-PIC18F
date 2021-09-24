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

/*Variables*/
int counter = 0;
unsigned char buttons1 = 0;
unsigned char buttons2 = 0xfc;
char parseIndex = 0;
char recievedUpdate = 0;
int timeoutCounter = 0;

struct buttonbits1
{
    unsigned char select:1; //bit0
    unsigned char NA1:1;    //bit1
    unsigned char NA2:1;    //bit2
    unsigned char start:1; //bit3
    unsigned char up:1; //bit4
    unsigned char right:1; //bit5
    unsigned char down:1; //bit6
    unsigned char left:1; //bit7
    
    
    
};
struct buttonbits2
{
    
};

/*Functions*/
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


void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    SPI1_Open(SPI1_DEFAULT);
    __delay_ms(200);
    //INTERRUPT_GlobalInterruptEnable();
    char cmd;
	char param1;
	char param2;
	char param3;
	cmd = 0;
	param1 = 0;
	param2 = 0;
	param3 = 0;
    struct buttonbits1 = 0xff;
    buttonbits1.left    = 1;
    buttonbits1.right   = 1;
    buttonbits1.up      = 0;
    buttonbits1.down    = 1;
    buttonbits1.select  = 1;
    buttonbits1.start   = 0;
    
    buttons1 = (buttons1) | buttonbits1;
    while (1)
    {
idle:        
        
        if(SS)
        {
            //we do all the button readings here
            
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
        __delay_us(20);
    }

    }
}


/**
 End of File
*/