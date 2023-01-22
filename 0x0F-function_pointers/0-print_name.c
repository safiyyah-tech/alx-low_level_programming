#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: the name
 * @f: ethe pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
