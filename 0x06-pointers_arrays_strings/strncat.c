#include "main.c"
/**
 * _strncat - concatenate two strings
 * @dest: string to concatenate
 * @src: string to be concatenated
 * @n: parameter to compare index to
 * Return: A merged string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return(dest);
}
