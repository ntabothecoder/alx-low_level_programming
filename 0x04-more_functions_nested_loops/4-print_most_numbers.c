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

	for (n = 48; n <= 58; n++)
	{
		if ((n != 50) || (n != 52))
		{
			continue;
		}
		
	}
	putchar(10);
}


