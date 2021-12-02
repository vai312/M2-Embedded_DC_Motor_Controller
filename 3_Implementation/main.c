#ifndef __AVR_ATmega8__
#define __AVR_ATmega8__
#endif
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <motor.h>

int main(void)
{

   
    PORTC = 0xFF;
    PORTC &= ~(1<<PC1);
    DDRC = 0x00;
    PORTB = 0x00;
    DDRB = 0x16;
    ADCSRA = 0x85;
    ADCSRB = 0x00;
    SPCR = 0x00;
    TWCR = 0x00;
    TCCR1A = 0xA3;
    TCCR1B = 0x04;
    TCNT1H = 0x00;
    TCNT1L = 0x00;
    ICR1H = 0x00;
    ICR1L = 0x00;
    OCR1AH = 0x00;
    OCR1AL = 0x00;
    OCR1BH = 0x00;
    OCR1BL = 0x00;
    TIMSK1 = 0x00;

    while (1)
    {
        stopping();
        forward();
        reverse();
        
        }
     return 0;
}