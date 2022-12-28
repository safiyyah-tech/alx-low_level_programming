#include "main.h"

/**
 * print_last_digit - displays the last digit
 *
 * @s: the number
 *
 * Return: the value of the last digits
 */
int print_last_digit(int s)
{
	int ld = s % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');
	return (0);
}
