#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @str: string
 * Return: the length of the string
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(str + 1));
}

/**
 * comparator - compares each character of the string
 * @str: string
 * @i1: smallest iterartor
 * @i2: biggest iterator
 * Return: .
 */
int comaprator(char *str, int i1, int i2)
{
	if (*(str + i1) == *(str + i2))
	{
		if ( i1 == i2 || i1 == i2 + 1)
			return(1);
		return (0 + comparator(str, i1 + 1, i2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome
 * @str: string
 * Return: 1 if st is a palindrome, 0 if it is not
 */
int is_palindrome(char *str)
{
	if (*str == '\0')
		return (1);
	return (comaparator(str, 0, _strlen_recursion(str) - 1));
}
