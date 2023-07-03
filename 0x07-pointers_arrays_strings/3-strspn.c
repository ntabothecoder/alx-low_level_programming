#include"stdio.h"

/**
*strspn-getthelengnthofaprefixstring
*
*Return:s
*/
unsignedint_strspn(char*s,char*accept)
{
	unsignedintlength=0;
	intfound=0;

	while(*s!='\0')
	{
		found=0;

	for(char*a=accept;*a!='\0';a++)
	{
	if(*s==*a)
	{
		found=1;
		break;
	}
	}	
	if(!found)
	{
	break;
	}

	length++;
	s++;
	}
	return(length);
}

