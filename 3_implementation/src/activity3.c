/**
 * @file activity3.c
 * @author snehesh
 */ 
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

void initialise_PWM(void){
    TCCR0A |= (1<<COM0A1)|(1<<WGM01)|(1<<WGM00);
    TCCR0B |= (1<<CS00);
}
void initialise_PWMpin(void){
    DDRD |= (1<<PD6);      // set PD6 for output
}

void compare(void){
    // changing the duty cycle of waveform
    if (ADC>0 && ADC<200){
        OCR0A = 51;
    }
    else if(ADC > 210 && ADC < 500){
        OCR0A = 101;
    }
    else if(ADC > 510 && ADC < 700){
        OCR0A = 178;
    }
    else if (ADC > 710 && ADC < 1024){
        OCR0A = 242;
    }
}
