#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @x: the number to be checked
 * Return: 1 for the character turned digit or 0 for anything else
 */
int _isdigit(int x)
{
	if (x >= 40 && x <= 57)
	{
		return (1);
	}
	return (0);
}
