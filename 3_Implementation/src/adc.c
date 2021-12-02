#ifndef __AVR_ATmega8__
#define __AVR_ATmega8__
#endif

#include <avr/io.h>
#define ADC_VREF_TYPE 0x40


unsigned int readADC(unsigned char ADCinput)
{
    ADMUX = ADCinput | ADC_VREF_TYPE;
    _delay_ms(1);
    ADCSRA |= (1 << ADSC);
    while ((ADCSRA & (1 << ADIF)) == 0);
    ADCSRA |= (1 << ADIF);
    return ADCW;
}