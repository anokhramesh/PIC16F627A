/*
 * File:   PIC16F627Amain.c
 * Author:Ramesh
 *Anokhautomation
 * Created on June 14, 2022, 10:43 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#define _XTAL_FREQ 2000000

__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & MCLRE_OFF & BOREN_OFF & LVP_ON & CPD_OFF & CP_OFF);
void main() 
{
    TRISA = 0;// set all pins of Port A as OUTPUT
    TRISB = 0;// set all pins of Port B as OUTPUT
    while(1)
    { 
    RA0=1;
    RB0=0;
     __delay_ms(1000);
    RA0=0;
    RB0=1;
    __delay_ms(1000);
    }
    

}