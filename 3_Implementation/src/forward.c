#ifndef __AVR_ATmega8__
#define __AVR_ATmega8__
#endif
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int forward()
{ int pot_val;
        if (PORTC1 == 0)
            {
                _delay_ms(2);
                while (PORTC1 == 0)
                {
                    pot_val = readADC(2);
                    OCR1BH = 0;
                    OCR1BL = 0;
                    OCR1AH = (pot_val >> 8);
                    OCR1AL = (pot_val & 0xFF);
                }
            }return 0;
}