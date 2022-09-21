#include <stdio.h>
#include "main.h"

/*
 * print_array - prints the n elements of an array
 * @a: array
 * @n: number of elements
 * Returns: Nothing
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}


