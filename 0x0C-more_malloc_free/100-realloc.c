#include "main.h"
#include <stdlib.h>


/**
 * _realloc - ..
 * @ptr: the pointer
 * @prev_size: the previous size of the integer
 * @curr_size: The new size
 * Return: ..
 */
void *_realloc(void *ptr, unsigned int prev_size, unsigned int curr_size)
{
	char *nptr;

	unsigned int a;

	if (curr_size == prev_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(curr_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	else
	{
		if (curr_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nptr = malloc(curr_size);
	if (nptr == NULL)
		return (NULL);
	for (a = 0; a < prev_size && a < curr_size; a++)
	{
		nptr[a] = ((char *) ptr)[a];
	}
	free(ptr);
	return (nptr);
}

