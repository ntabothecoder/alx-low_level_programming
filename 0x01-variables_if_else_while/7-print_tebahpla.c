#include <stdio.h>
/**
 * main - Print if the number is positive, negative or zero
 *
 * Description: Using the main function
 * this program prints 'programming is positive, negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
