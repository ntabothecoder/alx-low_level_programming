#include <stdio.h>
#include "main"

/**
 * print_square - prints a square
 * @size: parameter
 * Return: Nothing
 */

void print_square(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	}else
	{
		int row, column;
		
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
