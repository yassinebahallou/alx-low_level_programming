#include "main.h"

/**
 * _strpbrk - a function that searches any string for any of a set of bytes
 * @s: string to searched
 * @accept: the set of bytes to be searched
 * Return: if tye set is matched - a pointer to the matched byte
 * if no set matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
