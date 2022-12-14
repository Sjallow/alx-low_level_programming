#include"main.h"
/**
 * _islower - check if char is lowercases
 * @c: is char  need to be check
 * Return: 1
 */
int  _islower(int c)
{
	if(c>='a'&& c<='z')
		return(1);
	else
		return(0);
}
