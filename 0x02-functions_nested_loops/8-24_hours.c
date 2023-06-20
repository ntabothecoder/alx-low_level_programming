#include "main.h"
/**
 * jack_bauer - A function that prints every minute of the day of jack bauer 
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
			mins_remainder = mins_remainder;
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
