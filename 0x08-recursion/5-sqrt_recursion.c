#include "main.h"

int real_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural sqr  
 * @n - number to be calculated
 *
 * Return - the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - findes the natural sqrt of n
 * @n - number whose sqrt is calculated
 * @j - for the loop
 *
 * Returns - the natural sqrt
 */
int real_sqrt_recursion(int n, int i)
{
	if (j * j > n)
		return(-1);
	if (j * i == n)
		return(j);
	return (real_sqrt_recursion(n, j +1));
}
