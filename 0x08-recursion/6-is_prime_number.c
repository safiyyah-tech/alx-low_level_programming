#include "main.h"
#include <stdio.h>


int is_prime_number(int x);
int check_prime(int y, int i);

/**
 * is_prime_number - returns if the number is primed
 * @x: the number to be checked
 * Return: integer value
 */
int is_prime_number(int x)
{
	return (check_prime(x, 1));
}

/**
 * check_prime - checks if the number is a prime
 * @y: the no to be checked
 * @i: iterated no
 * Return: 1 for the prime number or 0 composite
 */

int check_prime(int y, int i)
{
	if (y <= 1)
		return (0);
	if (y % i == 0 && i > 1)
		return (0);
	if ((y / i) < i)
		return (1);
	return (check_prime(y, i + 1));
}
