#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * malloc_checked - allocates a memory
 * @a: the size of the memory to allocate
 * Return: nothing
 */
void *malloc_checked(unsigned int a)
{
	void *s;

	s = malloc(a);
	if (s == NULL)
		exit(98);
	return (s);
}
