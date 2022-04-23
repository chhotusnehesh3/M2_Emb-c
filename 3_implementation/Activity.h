#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>

#define F_CPU 16000000UL 	
#define SENSOR_ON (!(PIND&(1<<PD2))) 
#define HEAT_ON (!(PIND&(1<<PD3))) 

void InitLED(void);

uint16_t ReadADC(uint16_t ch);
void InitADC();

char outPWM(uint16_t temp_value);
void InitPWM(void);

void InitUART(uint16_t ubrr);
char UARTread();
void UARTwrite(char data);

#endif 
