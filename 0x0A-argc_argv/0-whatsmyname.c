#include "main.h"
#include <stdio.h>

/**
 * main - prints the programs name
 * @argc : the number of arguments
 * @argv : argument value
 *
 * Return: 0 on success, and non zero if not successfull
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
