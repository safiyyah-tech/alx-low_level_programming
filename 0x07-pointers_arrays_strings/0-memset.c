#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: source string
 * @b: constant byte for filling
 * @x: the length of the buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int x)
{
	unsigned int i = 0;

	while (i < x)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
