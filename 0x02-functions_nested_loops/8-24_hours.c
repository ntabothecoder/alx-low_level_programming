#include "main.h"
/**
 * jack_bauer - Prints every minute os Jack Bauer's day
 * starting from 0000 hrs to 2359 hrs and resets the minutes
 *
 *Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			hours_remainder = hours % 10;
			mins_remainder = mis_nremainder;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
