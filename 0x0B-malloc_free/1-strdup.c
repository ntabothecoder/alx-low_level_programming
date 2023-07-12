#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string inot another
 * @duplicate - pointer to return
 * @str : string to be input
 * This function duplicate a string and return the duplicate
 * Retruns :a pointer to  the duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, x = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	duplicate = malloc(sizeof(char) * (i + 1)); /* Allocate */
	if (duplicate == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		duplicate[x] = str[x];

	return (duplicate);
}

