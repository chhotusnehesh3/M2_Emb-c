/**
 * @file activity2.h
 * @author snehesh 
 */
#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

#include <avr/io.h>     
#include <util/delay.h>

void initialise_ADC(void);
uint16_t ReadADC(uint8_t ch);   
void initialise_ADCport(void);    
void actt2(void); 
#endif
