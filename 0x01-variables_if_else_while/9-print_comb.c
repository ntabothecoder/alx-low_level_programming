#include <stdio.h>
/**
 * main - prints nummbers from zero to nine with commas
 *
 * Description: Using the main function, this program prints
 * '0,1,2,3,4,5,6,7,8,9'
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
