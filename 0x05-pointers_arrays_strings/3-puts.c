#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string to print
 * Description: Prints a string
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}

