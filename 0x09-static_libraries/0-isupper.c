#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: the character to be tested 
 * Return: 1 if the character is upper and 0 if its not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return(1);
	}
	return(0);
}
