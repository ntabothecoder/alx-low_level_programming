#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory using malloc
 * @b : 
 * @ptr : pointer to the allocated memory
 * Description - This function allocates memory to 
 * a data type and returns a pointer to the allocated memeory
 * 
 * Returns : ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return(ptr);
}
	
