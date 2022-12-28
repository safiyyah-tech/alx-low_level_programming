#include < stdio.h>
#include "main.h"

/**
 * print_to_98 - displays all the nums from  the beginning to 98
 * @s: the starting point
 */
void print_to_98(int s)
{
	if (s >= 98)
	{
		while (s > 98)
			printf("%d, ", s--);
		printf("%d\n", s);
	}
	else
	{
		while (s < 98)
			printf("%d, ", s++);
		printf("%D\n", s);
	}
}
