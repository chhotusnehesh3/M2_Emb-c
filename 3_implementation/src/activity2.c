/**
 * @file activity2.c
 * @author Snehesh
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
void initialise_ADC(void)
{   ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

uint16_t ReadADC(uint8_t temp)
{
    ADMUX &= 0xf8;
    temp=temp&0b00000111;
    ADMUX |= temp;

    ADCSRA |= (1<<ADSC);

    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA |= (1<<ADIF);

    return (ADC);
}

void initialise_ADCport(void)
{
    DDRD &= ~(1<<PD3);        
    DDRC &= ~(1<<PC0);     
    DDRB |= (1<<PB1);   
}

void act2(void){
    initialise_PWM();
    initialise_ADC();
    initialise_ADCport();
    initialise_PWMpin();

    PORTB = 0x00;
    if((PIND & (1<<PD3)) == 1 ){
        PORTB |= (1<<PB1);
        ReadADC(0);
        compare();
        _delay_ms(200);  
    }
    else{
        ADCH=0x00;
        ADCL=0x00;
    }
}
