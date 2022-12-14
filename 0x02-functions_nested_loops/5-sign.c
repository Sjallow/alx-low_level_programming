#include"main.h"
/**
 * print_sign - print sign number
 *
 * @c: the int to check
 * Return: 0 and print 0 if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
