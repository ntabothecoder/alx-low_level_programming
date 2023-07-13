#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  * @x - amount of bytes to allocate
  * 
  * Return: A pointer to the memory allocated
  */
void *malloc_checked(unsigned int x)
{
	void *ptr;

	ptr = malloc(x);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
