#include "function_pointers.h"


/**
 * int_index - returns the index of the first elem for which the cmp
 * function does not return 0
 * @array: arrays of integer
 * @size: the number of elem in the array
 * @cmp: the pointer to the function to be used to compare values
 * Return: -1, if no elem matches or -1, if size is less or equal
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
