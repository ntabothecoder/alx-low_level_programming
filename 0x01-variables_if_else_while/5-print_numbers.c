#include <stdio.h>

/**
* main - prints all single digits to base 10
*
* Return: Always 0 (success)
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
}
