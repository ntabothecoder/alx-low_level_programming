#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print if the number is negative, positive or zero
 *
 * Description - using the main function
 *
 * This program prints 'programming is positive, negative or zero'
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 \n\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
