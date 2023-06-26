#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print _rev - prints a string in reverse
 * @s : string to be reversed
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
