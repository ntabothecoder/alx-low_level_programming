#include "main.h"
/**
 * _isalpha - function to check if c is an uppercase or lowercase letter
 * @c: The arguement used in this function
 * Return: 0
 * */
int _isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return(1);
	}
	else
		return(0);
}
