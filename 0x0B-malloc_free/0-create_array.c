#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: the size of array
 * @c: the char to fill in the array
 *
 * Return: the array filled
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
