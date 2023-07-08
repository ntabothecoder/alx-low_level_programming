#include "main.h"

/**
 * _isdigit - checks whether a digit in 1 through 9
 * @c ; the character to check
 * Return: 1 if the digit exists and 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return(1);
	}
	return(0);
}

