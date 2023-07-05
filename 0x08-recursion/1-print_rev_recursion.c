#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: the string in reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
