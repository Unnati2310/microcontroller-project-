/*
 * File:   main.c
 * Author: unnat
 *
 * Created on 4 April, 2023, 4:40 PM
 */


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
