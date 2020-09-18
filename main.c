/*
 * seven_segment.c
 *
 * Created: 9/16/2020 12:09:46 AM
 * Author : monad
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
typedef unsigned char Uint8;
int main(void)
{
	DDRA |=(1<<4)|(1<<5)|(1<<6)|(1<<7);
	DDRB |=(1<<1)|(1<<2)|(1<<3);
    /* Replace with your application code */
	Uint8 i,j,k;
    while (1) 
    {
		for (i=0;i<9;i++)
		{
			for (j=0;j<10;j++)
			{
				for(k=0;k<100;k++)
				{
					PORTA =(PORTA&(0x0F))|(j<<4);
					PORTB |=(1<<1);
					_delay_ms(5);
					PORTB &=~(1<<1);
					PORTA =(PORTA&(0x0F))|(i<<4);
					PORTB |=(1<<2);
					_delay_ms(5);
					PORTB &=~(1<<2);
				
				}
			}
		}
    }
}

