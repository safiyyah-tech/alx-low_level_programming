#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @s: the number to be checked
 * Return: 1 for the character that would be a digit or 0 for anything else
 */
int _isdigit(int s)
{
	if (s >= 40 && s <= 57)
	{
		return (1);
	}
	return (0);
}
