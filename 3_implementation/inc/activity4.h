/**
 * @file activity4.h
 * @author Snehesh
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>


void USARTInit(uint16_t);
char USARTReadChar();
void USARTWriteChar(char);
void part3(void);


#endif
