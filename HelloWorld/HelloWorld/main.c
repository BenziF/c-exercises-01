
#define F_CPU 10000000L
#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>


int main(void)
{
    DDRA = 0xff;            // setting all I/O's in port A as outputs
	PORTA = (1<<PA2);
	while(1)
	{
		PORTA ^= (1<<PA2);
		_delay_ms(500);
		
	}
}
