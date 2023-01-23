#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * op_add - returns the sum of two integers
 * @a: interger one
 * @b: integer two
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - returns the difference between two integers
 * @a: integer one
 * @b: integer two
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - returns the product of two integers
 * @a: integer one
 * @b: integer two
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - returns the division of two integers
 * @a: integer one
 * @b: integer two
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - returns the remainder of the division of two integers
 * @a: integer one
 * @b: integer two
 * Return: the result
 */
int op_mod(int a, int b)
{
	if (b ==0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
