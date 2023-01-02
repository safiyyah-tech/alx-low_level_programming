#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - displays the consecutive charaters of str1 that are in str2
 * @s: source string
 * @search: searching string
 * Return: new string
 */
char *_strpbrk(char *s, char *search)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(search + j); j++)
		{
			if (*(s + i) == *(search + j))
			{
				break;
			}
		}
		if (*(search + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
