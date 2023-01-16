#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * argstostr - converts parameters to string
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
char *argstostr(int argc, char **argv)
{
	int ch = 0, a = 0, b = 0, c = 0;

	char *s;

	if (argc == 0 || argv == NULL)
		return (NULL);
	while (a < argc)
	{
		while (argv[a][b])
		{
			ch++;
			b++;
		}
		b = 0;
		a++;
	}
	s = malloc((sizeof(char) * ch) + argc + 1);
	a = 0;
	while (argv[a])
	{
		while (argv[a][b])
		{
			s[c] = argv[a][b];
			c++;
			b++;
		}
		s[c] = '\n';
		b = 0;
		c++;
		a++;
	}
	c++;
	s[c] = '\0';
	return (s);
}
