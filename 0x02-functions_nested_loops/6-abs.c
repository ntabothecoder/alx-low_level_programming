#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the absolute value of n
 *
 *@c: The arguement fo the function
 *
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (0);
	}
	else
		return (c * -1);
}
