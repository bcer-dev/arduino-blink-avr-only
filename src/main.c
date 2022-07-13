#include <avr/io.h>
#include <util/delay.h>

int main()
{
    DDRB |= (1 << 1); // Set port 9 to output

    while (1)
    {
        PORTB |= (1 << 1); // Write HIGH to port 9
        _delay_ms(250);
        PORTB &= ~(1 << 1); // Write LOW to port 9
        _delay_ms(250);
    }

    return 0;
}