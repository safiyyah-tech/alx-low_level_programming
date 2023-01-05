#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @r: the reverse string
 * Return: null
 */
void _print_rev_recursion(char *r)
{
	if (*r == '\0')
	{
		return;
	}
	r++;
	_print_rev_recursion(r);
	r--;
	_putchar(*r);
}
