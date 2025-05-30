/*
 * atmega8-blink
 * Simple LED blink using ATmega8 and internal delay
 * Pin: PB0 (pin 14)
 */

#define F_CPU 1000000UL // Set clock frequency (adjust to your MCU)

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // Set PB0 as output
    DDRB = 0b00000001;

    while (1) {
        // Toggle PB0
        PORTB ^= 0b00000001;
        _delay_ms(500); // Delay 500 ms
    }
}
