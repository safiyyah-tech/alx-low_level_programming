#include "main.h"
/**
 * times_table - displays 9 times table
 */
void times_table(void)
{
	int num, mult, pord;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			pord = num + mult;
			if (pord <= 9)
				_putchar(' ');
			else
				_putchar((pord / 10) + '0');
			_putchar((pord % 10) + '0');
		}
	}
}
