#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print the numbers from 0 to 9
 * 0 - 9
 * Returns: Not specified
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
