#include <stdio.h> 
* main: Prints the alphabet in lowercase & uppercase
 *
 * DEscription: This program prints the alphabet 
 * in lowercase and then uppercase followed by
 * a new line
 * return: 0
 */
int maint(void)
{
	char ch;
	for (ch = 'a', ch <='z', ch++)
	{
		putchar(ch);
	}
	for (ch = 'A', ch<= 'Z', ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
