#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);

/**
 * _strlen_recursion - it returns the length of a string
 * @s: string
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - it compares each character of string
 * @s: string
 * @n1: smallest number
 * @n2: biggest number
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - a function that returns 1 if a string is a
 * palindrome and 0 if not
 * @s: string
 * Return: 1 if s is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
