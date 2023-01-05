#include "main.h"
#include <stdio.h>


int _sqrt_recursion(int n);
int _sqrt(int s, int i);

/**
 * _sqrt_recursion - returns the nat sqrt of a no
 * @n: the value of the nat sq
 * Return: the nat sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates the nat sqrt
 * @s: the square root value
 * @i: iterate number
 * Return: the nat sqrt
 */
int _sqrt(int s, int i)
{
	int sqrt = i * i;

	if (sqrt > s)
		return (-1);
	if (sqrt == s)
		return (i);
	return (_sqrt(s, i + 1));
}
