#include <stdio.h>
/**
* main - print if the number is positive or negative
* Description- Using the main function
* this program prints 'programming is positive, zero or negative
*
* Main function returns: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
	}
	putchar("\n");
	return (0);
}
