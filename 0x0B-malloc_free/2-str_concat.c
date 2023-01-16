#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * str_concat - concatenates two strings of any size
 * @str1: string one
 * @str2: string two
 * Return: the concatenated string
 */
char *str_concat(char *str1, char *str2)
{
	int a = 0, b = 0, c = 0, d = 0;

	char *s;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	while (str1[a])
		a++;
	while (str2[b])
		b++;
	d = a + b;
	s = malloc((sizeof(char) * d) + 1);
	if (s == NULL)
		return (NULL);
	b = 0;
	while (c < d)
	{
		if (c <= a)
			s[c] = str1[c];
		if (c >= a)
		{
			s[c] = str2[b];
			b++;
		}
		c++;
	}
	s[c] = '\0';
	return (s);
}
