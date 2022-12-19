#include "main.h"
#include <unistd>
/**
 * main - Entry point
 * Return: On Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
