 #ifndef __AVR_ATmega8__
#define __AVR_ATmega8__
#endif
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
 int stopping()
 {
        if ((PORTC1) == 0 && PORTC2 == 0)
        {
            _delay_ms(2);
            while (PORTC1 == 0 && PORTC2 == 0)
            {
                OCR1AH = 0;
                OCR1AL = 0;
                OCR1BH = 0;
                OCR1BL = 0;
            }
        }
        return 0;
 }