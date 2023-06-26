#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers 0 to 9
 * DOes not print 2 and 4
 * 
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if ((n != '2') || (n != '4'))
		{
			_putchar(n);
		}
		
	}
	_putchar('\n');
}


