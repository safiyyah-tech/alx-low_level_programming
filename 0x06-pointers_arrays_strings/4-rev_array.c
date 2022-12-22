#include "main.h"

/**
 * reverse_array - the reverse array of the integers
 * @a: array
 * @n: elements number in the array
 * Return: void
 */
void reverse_array(int *a, int *n)
{
	int i;

	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
