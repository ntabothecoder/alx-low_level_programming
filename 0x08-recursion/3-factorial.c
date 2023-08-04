#include "main.h"

/**
 * factorial - retturns the factorial of a number n
 * @n - number 
 * return - -1 if n is lower than 0
 *	    o if n is 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return(1);
	return n * factorial(n -1);
}

