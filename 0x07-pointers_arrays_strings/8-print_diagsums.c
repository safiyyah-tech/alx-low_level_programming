#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - displays the sum of two diagonals of a square
 * @a: array
 * @s: size of the array
 * Return: void
 */
void print_diagsums(int *a, int s)
{
	int i, s1;

	unsigned int diagsum1, diagsum2;

	s1 = 0;
	diagsum1 = 0;
	diagsum2 = 0;
	s1 = (s * s) - 1;
	for (i = 0; i <= s1; i = i + (s + 1))
	{
		diagsum1 = diagsum1 + a[i];
	}
	for (i = (s - 1); i < s1; i = i + (s - 1))
	{
		diagsum2 = diagsum2 + a[i];
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
