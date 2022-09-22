#include "main.h"
/**
 *  _strncpy - c function that copies a string including the null byte
 *  if the length of the source string is less than the maximum byte number
 *  the remainder of the destination string is filled with null bytes
 *  @dest: buffer storing the string copy
 *  @src: the source string
 *  @n: maximum number of bytes copied
 *  Return: nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

