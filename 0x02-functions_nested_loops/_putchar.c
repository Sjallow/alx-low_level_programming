#include"main.h"
#include<unistd.h>
/**
 * _putchar - write character c to stdout
 *
 * Return:  0
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
