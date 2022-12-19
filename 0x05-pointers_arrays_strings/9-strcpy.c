#include "main.h"
/**
 * _strcpy  -  Copies a string pointed to by @src, including the
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 * Return: Always 0
 */
char *_strcpy(char *dest, const char *src)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;									}
return (dest);
}
