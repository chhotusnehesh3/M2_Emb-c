
#include "Activity.h"

void InitLED(void)
{
	DDRB|=(1<<PB0);
    DDRD&=~(1<<PD2);
    DDRD&=~(1<<PD3);
    PORTD|=(1<<PD2);
    PORTD|=(1<<PD3);
}
