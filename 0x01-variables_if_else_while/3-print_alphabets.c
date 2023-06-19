#include <stdio.h>
/**
 * main: Prints the alphabet in lowercase & uppercase
 *
 * Description: This program prints the alphabet
 * in lowercase and then uppercase followed by
 * a new line
 *
 * Main function returns: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
