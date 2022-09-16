#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * 
 * @n: The parameter used
 * Return: 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('-');
	}
	putchar('\n');
}
