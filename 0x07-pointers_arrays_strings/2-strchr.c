#include "main.h"

/**
 * _strchr - a function that locates a specific  character in a string
 * @s: The string to be searched
 * @c: The character to be located
 * Return: if c is found - a pointer tothe first occurence
 * if c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] > '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
