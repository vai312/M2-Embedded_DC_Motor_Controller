 #ifndef __AVR_ATmega8__
#define __AVR_ATmega8__
#endif
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

 int reverse()
 { int pot_val;
        
        if (PORTC2 == 0)
            {
                _delay_ms(2);
                while (PORTC2 == 0)
                {
                    pot_val = readADC(2);
                    OCR1AH = 0;
                    OCR1AL = 0;
                    OCR1BH = (pot_val >> 8);
                    OCR1BL = (pot_val & 0xFF);
                }
            }
    return 0;
 }