#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a - the  first int
 *@b - the second int
 *
 *Returns: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

