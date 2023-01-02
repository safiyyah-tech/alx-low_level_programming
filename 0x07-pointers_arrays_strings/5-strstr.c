#include "main.h"

/**
 * _strstr - displays the substring needle in the string haystack
 * @hs: main string to be examined
 * @needle: searched in the haystack
 * Return: 0
 */
char *_strstr(char *hs, char *needle)
{
	char *str1, *str2;

	while (*hs != '\0')
	{
		str1 = hs;
		str2 = needle;
		while (*hs != '\0' && *str2 != '\0' && *hs == *str2)
		{
			hs++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		hs = str1 + 1;
	}
	return (0);
}
