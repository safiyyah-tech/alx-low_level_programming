#include "main.h"
/**
 * largest_number - returns the largest number
 * @s: first integer
 * @m: second
 * @a: third
 * Return: largest number
 */
int largest_number(int s, int m, int a)
{
	int largest;

	if (s > m)
	{
		if (m > a)
			largest = s;
		else if (s > a)
			largest = s;
		else
			largest = a;
	}
	else
	{
		if (m < a)
			largest = a;
		else
			largest = m;
	}
	return (largest);
}
