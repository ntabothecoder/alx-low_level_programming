#include <stdio.h>
/**
 * main - print if the number is positive, zero or negative
 *
 * Description: Using the main function
 *this program prints  "programming is positive, zero or negative"
 *Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
