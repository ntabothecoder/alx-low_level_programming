#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n
  * Returns - factorial
  */
int factorial(int n)
{
	return n * factorial(n - 1);
}
