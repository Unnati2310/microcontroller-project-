# microcontroller-project-
Core Project EE2004D
 MICROPROCESSORS AND MICROCONTROLLERS
RUNNING LEDs USING PIC MICROCONTROLLER
APPLICATIONS OF LEDs (LIGHT EMITTING DIODES)

LEDs ( Light Emitting Diodes) are used extensively due to its compact size and flexibility, low consumption of energy and increased lifetime, switch response time and fast switching capabilities, and its major use includes illuminating objects.
Using LEDs can result to efficient power reduction and is also, highly economic. LEDs have been observed to replace CFLs and LCDs when it’s used for TV Backlighting, where its direct usage provides better contrast. Owing to low output power voltage, battery life is enhanced in smartphones where LEDs are used in the smartphone’s backlight design. 
LEDs are extensively used in display boards and automotive industries. With LEDs, energy is saved and there is clear visibility. LEDs can act as efficient safety measures as they enhance visibility in any part of a journey. 
Applications of LED include dimming of lights which results in lesser energy consumption. In Global Dimming, all LEDs are dimmed together and in Local Dimming, LEDs are dimmed independently.
LEDs are also used in optical communication systems, alarm and security systems, remote controlled operations, robotics, etc.





COMPONENTS REQUIRED
PICKIT 2
PIC 18F452 IC
4 LEDS OF ANY COLOUR
4, 1K OHM RESISTORS
BUZZER
SWITCH
CONNECTING WIRES
BREADBOARD 
7 V POWER SUPPLY

CIRCUIT DIAGRAM

SCREENSHOT

PIC MICROCONTROLLER
TO PROGRAM THE PIC MICROCONTROLLER FOR RUNNING LEDs, AN IDE (Integrated development environment) is required, where the programming takes place. A compiler is needed to convert our code to a microcontroller unit readable format, hex files. Ipe (Integrated programming environment) will essentially transfer the code into our pic microcontroller unit.
Ide –MPLAB 6.05
Ipe – MPLAB 6.05
Compiler – XC8
OBJECT CODE VERSION – 3.11
Pickit 2 uploads our code into the pic microchip.
The PICkit 2 Development Programmer/Debugger (PG164120) is a low-cost development tool with an easy to use interface for programming and debugging Microchip’s Flash families of microcontrollers. With Microchip’s powerful MPLAB Integrated Development Environment (IDE) the PICkit 2 enables in-circuit debugging on most PIC® microcontrollers In-Circuit-Debugging runs, halts and single steps the program while the PIC microcontroller is embedded in the application. When halted at a breakpoint, the file registers can be examined and modified.
We will program our pic 18f452 using the icsp option that is available in our microcontroller unit.
The following procedure is followed to burn the code.
Launch the mplab ipe.
Connect pickit 2 to the laptop/pc aNd lock the microchip on it. Once connected, browse for the pic hex file and burn it to the microchip.
Verify by reading the components in the microchip.

CODE AND EXPLANATION
The configuration bits are set in the PIC Microcontroller and the code starts with void main(void) function.  ‘xc.h’ is the header file. The ‘xc.h’ header file allows code in the source file to access compiler-specific or device-specific features. Based on your selected device, the compiler sets macros that allow ‘xc.h’ to vector to the correct device-specific header file.
TRISB = 0; //0b00000000 sets the PORT B pins as input pins. 
#include <xc.h>

#include <pic18f452.h>
#include "conbits.h"


char run = 1;

void main(void) {
    TRISB = 0; //0b00000000
    LATB = 1; //0b00000001
    while (1) {
        LATB = 0; //0b00000000
        __delay_ms(250);
        LATB = run; //0b00000011
        __delay_ms(250);

        if (run >= 0x80) { //0b10000000
            run = 1;
        } else {
            run *= 2; //0b00001000
        }
    }
}
The LEDs with blink with a delay of 250 ms.

SCREENSHOT OF THE CODE

WORKING
MAKE THE CONNECTIONS AS PER THE CONNECTION DIAGRAM WITH THE PIC MICROCHIP INSERTED ON THE BREADBOARD. AFTER THE CONNECTIONS ARE MADE, WHEN THE SWITCH IS CLOSED, CURRENT FLOWS AND RUNNING LEDs ARE OBSERVED. 
