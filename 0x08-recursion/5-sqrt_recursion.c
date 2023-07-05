#include "main.h"

/**
  * _sqrt_recursion - returns the natural square of a number
  * @n - the number to be worked on
  *
  * Returns - Natural square of n
  */
int _sqrt_recursion(int n)
{
	if(n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return( _sqrt_recursion(n, 0, n));
	}
}
