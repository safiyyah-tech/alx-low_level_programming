#include <stdio.h>

/**
 * main - prints the sum of all the multiles of 3, 5 to 1024
 * Return Always 0 (Success)
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);

	return (0);
}
