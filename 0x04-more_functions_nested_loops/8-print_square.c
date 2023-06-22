#include <stdio.h>
#include "main"

/**
 * print_square - prints a square
 * @size: parameter
 * Return: Nothing
 */

void print_square(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 0; inc1 < size; incl++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				_putchar('#');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
