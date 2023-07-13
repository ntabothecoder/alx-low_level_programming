#include "main.h"
#include <stdio.h>

/**
 * main - prints the programs name
 * @argc - the number of arguments
 * @argv - argument value
 *
 * Return - 0 (success)
 */
 int main(int argc, char *argv[])
{
 	(void)argv;
	printf("%d\n",argc - 1);
	
	return(0);
}
