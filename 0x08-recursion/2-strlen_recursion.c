#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @l: the string length to count
 * Return: integer value
 */
int _strlen_recursion(char *l)
{
	if (*l == '\0')
	{
		return (0);
	}
	l++;
	return (_strlen_recursion(l) + 1);
}
