#include "main.h"
/**
 * print_sign: A function to check for the sign of a number
 * @n: The arguement 
 * 
 * Return: 0
 */
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else
	{
		_putchar('0');
		return(0);
	}
}
