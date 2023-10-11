#include "main.h"

/**
 * main : a function that prints a string in reverse
 *
 * Return : void
 */

void _print_rev_recursion(char *s);
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
