#include "main.h"

/**
 * wildcmp - compares two strings
 * @str1: string 1
 * @str2: string 2
 * Return: 1 if they are identical, 0 if they are not
 */
int wildcmp(char *str1, char *str2)
{
	if (*str2 == '*' && *(str2 + 1) != '\0' && *str1 == '\0')
		return (0);
	if (*str1 == '\0' && *str2 == '\0')
		return (1);
	if (*str1 == *str2)
		return (wildcmp(str1 + 1, str2 + 1));
	if (*str2 == '*')
		return (wildcmp(str1, str2 + 1) || wildcmp(str1 + 1, str2));
	return (0);
}
