#include "main.h"
/**
 * print_alphabet_x10 - A function to print the alphabet ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c, i;

	for(i = 0; i <= 9; i++)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		puthcar('\n');
	}
}
