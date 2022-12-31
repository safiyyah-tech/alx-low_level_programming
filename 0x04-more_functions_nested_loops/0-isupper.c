#include "main.h"

/**
 * _isupper - checks if a letter is in uppercase
 * @s: the number to be checked
 * Return: 1 for an uppercase letter or 0 for any thing else
 */
int _isupper(int s)
{
	if (s >= 65 && s <= 90)
	{
		return (1);
	}
	return (0);
}
