#include "main.h"

/**
 * is_prime_number - returns 1 if input integer is a prime, 0 if otherwise
 * @n - input integer
 *
 */
int is_prime_number(int n)
{
	return is_prime_helper(n, n -1);
}

/**
 * is_prime_helper - finds out whther n is prime
 * @n - number to be checked
 * returns - 
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
		return 0;
	if (divisor == 1)
		return 1;
	if (n % divisor == 0)
		return 0;
	return is_prime_helper(n, divisor - 1);
}
