#include "activity1.h"
void initialise_gpiopins(void){
    DDRD &= ~(1<<PD3);  
    DDRD &= ~(1<<PD4); 
    DDRB |= (1<<PB1);  
}

void act1(void){
    if(((PIND & (1<<PD3)) && (PIND & (1<<PD4))) == 1){
        PORTB |= (1<<PB1);
    }
    else{
        PORTB &= ~(1<<PB1);
    }
}
