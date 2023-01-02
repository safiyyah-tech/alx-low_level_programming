#include "main.h"

/**
 * _strspn - displays the consecutive characters of str1 that are in str2
 * @s: source string
 * @search: searching string
 * Return: new string
 */
unsigned int _strspn(char *s, char *search)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(search + i); i++)
		{
			if (*(s + j) == *(search + i))
				break;
		}
		if (*(search + i) == '\0')
			break;
	}
	return (j);
}
