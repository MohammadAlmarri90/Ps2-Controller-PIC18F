/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F25K42
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set ACK aliases
#define ACK_TRIS                 TRISAbits.TRISA4
#define ACK_LAT                  LATAbits.LATA4
#define ACK_PORT                 PORTAbits.RA4
#define ACK_WPU                  WPUAbits.WPUA4
#define ACK_OD                   ODCONAbits.ODCA4
#define ACK_ANS                  ANSELAbits.ANSELA4
#define ACK_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define ACK_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define ACK_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define ACK_GetValue()           PORTAbits.RA4
#define ACK_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define ACK_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define ACK_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define ACK_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define ACK_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define ACK_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define ACK_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define ACK_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set R2 aliases
#define R2_TRIS                 TRISAbits.TRISA6
#define R2_LAT                  LATAbits.LATA6
#define R2_PORT                 PORTAbits.RA6
#define R2_WPU                  WPUAbits.WPUA6
#define R2_OD                   ODCONAbits.ODCA6
#define R2_ANS                  ANSELAbits.ANSELA6
#define R2_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define R2_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define R2_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define R2_GetValue()           PORTAbits.RA6
#define R2_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define R2_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define R2_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define R2_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define R2_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define R2_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define R2_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define R2_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set L2 aliases
#define L2_TRIS                 TRISAbits.TRISA7
#define L2_LAT                  LATAbits.LATA7
#define L2_PORT                 PORTAbits.RA7
#define L2_WPU                  WPUAbits.WPUA7
#define L2_OD                   ODCONAbits.ODCA7
#define L2_ANS                  ANSELAbits.ANSELA7
#define L2_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define L2_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define L2_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define L2_GetValue()           PORTAbits.RA7
#define L2_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define L2_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define L2_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define L2_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define L2_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define L2_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define L2_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define L2_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set DOWN aliases
#define DOWN_TRIS                 TRISBbits.TRISB0
#define DOWN_LAT                  LATBbits.LATB0
#define DOWN_PORT                 PORTBbits.RB0
#define DOWN_WPU                  WPUBbits.WPUB0
#define DOWN_OD                   ODCONBbits.ODCB0
#define DOWN_ANS                  ANSELBbits.ANSELB0
#define DOWN_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define DOWN_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define DOWN_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define DOWN_GetValue()           PORTBbits.RB0
#define DOWN_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define DOWN_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define DOWN_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define DOWN_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define DOWN_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define DOWN_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define DOWN_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define DOWN_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set LEFT aliases
#define LEFT_TRIS                 TRISBbits.TRISB1
#define LEFT_LAT                  LATBbits.LATB1
#define LEFT_PORT                 PORTBbits.RB1
#define LEFT_WPU                  WPUBbits.WPUB1
#define LEFT_OD                   ODCONBbits.ODCB1
#define LEFT_ANS                  ANSELBbits.ANSELB1
#define LEFT_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LEFT_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LEFT_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LEFT_GetValue()           PORTBbits.RB1
#define LEFT_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LEFT_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LEFT_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define LEFT_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define LEFT_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define LEFT_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define LEFT_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define LEFT_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RIGHT aliases
#define RIGHT_TRIS                 TRISBbits.TRISB2
#define RIGHT_LAT                  LATBbits.LATB2
#define RIGHT_PORT                 PORTBbits.RB2
#define RIGHT_WPU                  WPUBbits.WPUB2
#define RIGHT_OD                   ODCONBbits.ODCB2
#define RIGHT_ANS                  ANSELBbits.ANSELB2
#define RIGHT_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RIGHT_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RIGHT_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RIGHT_GetValue()           PORTBbits.RB2
#define RIGHT_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RIGHT_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RIGHT_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define RIGHT_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define RIGHT_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define RIGHT_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define RIGHT_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define RIGHT_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set UP aliases
#define UP_TRIS                 TRISBbits.TRISB3
#define UP_LAT                  LATBbits.LATB3
#define UP_PORT                 PORTBbits.RB3
#define UP_WPU                  WPUBbits.WPUB3
#define UP_OD                   ODCONBbits.ODCB3
#define UP_ANS                  ANSELBbits.ANSELB3
#define UP_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define UP_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define UP_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define UP_GetValue()           PORTBbits.RB3
#define UP_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define UP_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define UP_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define UP_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define UP_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define UP_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define UP_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define UP_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set TRIANGLE aliases
#define TRIANGLE_TRIS                 TRISBbits.TRISB4
#define TRIANGLE_LAT                  LATBbits.LATB4
#define TRIANGLE_PORT                 PORTBbits.RB4
#define TRIANGLE_WPU                  WPUBbits.WPUB4
#define TRIANGLE_OD                   ODCONBbits.ODCB4
#define TRIANGLE_ANS                  ANSELBbits.ANSELB4
#define TRIANGLE_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define TRIANGLE_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define TRIANGLE_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define TRIANGLE_GetValue()           PORTBbits.RB4
#define TRIANGLE_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define TRIANGLE_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define TRIANGLE_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define TRIANGLE_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define TRIANGLE_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define TRIANGLE_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define TRIANGLE_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define TRIANGLE_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set SQUARE aliases
#define SQUARE_TRIS                 TRISBbits.TRISB5
#define SQUARE_LAT                  LATBbits.LATB5
#define SQUARE_PORT                 PORTBbits.RB5
#define SQUARE_WPU                  WPUBbits.WPUB5
#define SQUARE_OD                   ODCONBbits.ODCB5
#define SQUARE_ANS                  ANSELBbits.ANSELB5
#define SQUARE_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define SQUARE_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define SQUARE_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define SQUARE_GetValue()           PORTBbits.RB5
#define SQUARE_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define SQUARE_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define SQUARE_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define SQUARE_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define SQUARE_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define SQUARE_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define SQUARE_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define SQUARE_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set CROSS aliases
#define CROSS_TRIS                 TRISBbits.TRISB6
#define CROSS_LAT                  LATBbits.LATB6
#define CROSS_PORT                 PORTBbits.RB6
#define CROSS_WPU                  WPUBbits.WPUB6
#define CROSS_OD                   ODCONBbits.ODCB6
#define CROSS_ANS                  ANSELBbits.ANSELB6
#define CROSS_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define CROSS_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define CROSS_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define CROSS_GetValue()           PORTBbits.RB6
#define CROSS_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define CROSS_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define CROSS_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define CROSS_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define CROSS_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define CROSS_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define CROSS_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define CROSS_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set CIRCLE aliases
#define CIRCLE_TRIS                 TRISBbits.TRISB7
#define CIRCLE_LAT                  LATBbits.LATB7
#define CIRCLE_PORT                 PORTBbits.RB7
#define CIRCLE_WPU                  WPUBbits.WPUB7
#define CIRCLE_OD                   ODCONBbits.ODCB7
#define CIRCLE_ANS                  ANSELBbits.ANSELB7
#define CIRCLE_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define CIRCLE_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define CIRCLE_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define CIRCLE_GetValue()           PORTBbits.RB7
#define CIRCLE_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define CIRCLE_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define CIRCLE_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define CIRCLE_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define CIRCLE_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define CIRCLE_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define CIRCLE_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define CIRCLE_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set START aliases
#define START_TRIS                 TRISCbits.TRISC0
#define START_LAT                  LATCbits.LATC0
#define START_PORT                 PORTCbits.RC0
#define START_WPU                  WPUCbits.WPUC0
#define START_OD                   ODCONCbits.ODCC0
#define START_ANS                  ANSELCbits.ANSELC0
#define START_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define START_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define START_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define START_GetValue()           PORTCbits.RC0
#define START_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define START_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define START_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define START_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define START_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define START_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define START_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define START_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set SELECT aliases
#define SELECT_TRIS                 TRISCbits.TRISC1
#define SELECT_LAT                  LATCbits.LATC1
#define SELECT_PORT                 PORTCbits.RC1
#define SELECT_WPU                  WPUCbits.WPUC1
#define SELECT_OD                   ODCONCbits.ODCC1
#define SELECT_ANS                  ANSELCbits.ANSELC1
#define SELECT_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SELECT_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SELECT_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SELECT_GetValue()           PORTCbits.RC1
#define SELECT_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SELECT_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SELECT_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SELECT_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SELECT_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SELECT_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SELECT_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define SELECT_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set ANALOGUE aliases
#define ANALOGUE_TRIS                 TRISCbits.TRISC2
#define ANALOGUE_LAT                  LATCbits.LATC2
#define ANALOGUE_PORT                 PORTCbits.RC2
#define ANALOGUE_WPU                  WPUCbits.WPUC2
#define ANALOGUE_OD                   ODCONCbits.ODCC2
#define ANALOGUE_ANS                  ANSELCbits.ANSELC2
#define ANALOGUE_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define ANALOGUE_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define ANALOGUE_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define ANALOGUE_GetValue()           PORTCbits.RC2
#define ANALOGUE_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define ANALOGUE_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define ANALOGUE_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define ANALOGUE_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define ANALOGUE_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define ANALOGUE_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define ANALOGUE_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define ANALOGUE_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSELC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set L1 aliases
#define L1_TRIS                 TRISCbits.TRISC6
#define L1_LAT                  LATCbits.LATC6
#define L1_PORT                 PORTCbits.RC6
#define L1_WPU                  WPUCbits.WPUC6
#define L1_OD                   ODCONCbits.ODCC6
#define L1_ANS                  ANSELCbits.ANSELC6
#define L1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define L1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define L1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define L1_GetValue()           PORTCbits.RC6
#define L1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define L1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define L1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define L1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define L1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define L1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define L1_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define L1_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set R1 aliases
#define R1_TRIS                 TRISCbits.TRISC7
#define R1_LAT                  LATCbits.LATC7
#define R1_PORT                 PORTCbits.RC7
#define R1_WPU                  WPUCbits.WPUC7
#define R1_OD                   ODCONCbits.ODCC7
#define R1_ANS                  ANSELCbits.ANSELC7
#define R1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define R1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define R1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define R1_GetValue()           PORTCbits.RC7
#define R1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define R1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define R1_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define R1_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define R1_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define R1_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define R1_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define R1_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/