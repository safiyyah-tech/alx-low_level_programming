#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: the character to search
 * Return: the pointer to the first occurrence of the character in a string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
