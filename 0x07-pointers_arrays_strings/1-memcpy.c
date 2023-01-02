#include "main.h"

/**
 * _memcpy - fills the memory with another buffer
 * @s: source string
 * @str: string for filling
 * @x: length of the buffer
 * Return: new string
 */
char *_memcpy(char *s, char *str, unsigned int x)
{
	unsigned int i = 0;

	while (i < x)
	{
		*(s + i) = *(str + i);
		i++;
	}
	return (s);
}
