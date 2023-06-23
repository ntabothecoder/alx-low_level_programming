#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers to 14
 *
 * Return ; nothing
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				putchar('1');
			}
			putchar((y % 10) + '0');
		}
		putchar('\n');
	}
}
