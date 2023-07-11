#include "main.h"

/**
 * _is_prime_number
 *@n - input
 * Return; 1if number is prime and 0 if number si not
 */
 int is_prime_number(int n)
 {
 	if(n < 0)
	{
		return(actual_prime(n, n - 1);
	}
}
/**
 * actual_prime(int n, int i)
 * @n: number to evaluate
 * @i: counter variale
 *
 * Return: 1 if prime and 0 if not
 */
 int actual_prime(int n, int i)
 {
 	if(i == 1)
	{
		return (1)
	}
	if(n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
