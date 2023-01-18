#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings
 * @str1: string one
 * @str2: string two
 * @a: integer
 * Return: the string
 */
char *string_nconcat(char *str1, char *str2, unsigned int a)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;

	char *string;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	while (str1[i])
		i++;
	while (str2[k])
		k++;
	if (a >= k)
		l = i + k;
	else
		l = i + a;
	string = malloc(sizeof(char) * l + 1);
	if (string == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			string[j] = str1[j];
		if (j >= i)
		{
			string[j] = str2[k];
			k++;
		}
		j++;
	}
	string[j] = '\0';
	return (string);
}
