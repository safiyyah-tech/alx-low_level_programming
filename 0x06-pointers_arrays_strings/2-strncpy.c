#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @a: the value of the input
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int a)
{
	int j;

	j = 0;
	while (j < a && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < a)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
