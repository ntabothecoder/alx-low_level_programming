#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copy pastes a string
 * @dest: destination
 * @src
 *
 * Return: desination
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
