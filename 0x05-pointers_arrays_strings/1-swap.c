#include "main.h"

/**
 * swap_int - swaps the value sof two integers
 * @a - first int
 * @b - second int
 * Returns: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

