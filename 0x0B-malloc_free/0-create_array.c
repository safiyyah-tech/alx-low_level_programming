#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates the array of characters
 * @size: the size of the array
 * @c: the character that will fill the array
 * Return: the filled array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;

	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size *sizeof(char));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}
	return (s);
}
