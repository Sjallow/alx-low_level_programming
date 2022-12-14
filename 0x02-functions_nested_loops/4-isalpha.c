#include"main.h"
/**
 * _isalpha - Checks for alphabets
 * @c: Code to check
 * Return: 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
