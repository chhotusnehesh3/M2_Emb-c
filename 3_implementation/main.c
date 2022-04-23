#include"Activity.h"
void peripheral_init(void)
{
    InitLED();
    InitADC();
    InitPWM();
    InitUART(103);
}
uint16_t temp;
char temp_data;
int main(void)
{
    peripheral_init();

    while(1)
    {
        if(SENSOR_ON && HEAT_ON)  
        {
            PORTB |= (1<<PB0);  
            temp=ReadADC(0);
            temp_data = outPWM(temp);
            UARTwrite(temp_data);
        }
        else
        {
            PORTB &= ~(1<<PB0); 
            OCR1A=0;
        }
    }
    return 0;
}
