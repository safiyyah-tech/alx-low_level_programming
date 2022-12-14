#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: c is the character to be checked
 *
 * Return: it is 1 if the character is a letter, and 0 if it is not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
