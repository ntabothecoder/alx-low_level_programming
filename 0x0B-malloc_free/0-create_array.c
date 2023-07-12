#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size x and assign it to a char
 * @size: lenght of array
 * @c: char to assign
 * This function creates an array of size x and assing it to char c
 * Returns: pointer to the created array and null if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
