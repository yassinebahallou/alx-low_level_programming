#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: comtains the minimum array
 * @max: contains the maximum array
 *
 * Return:  pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
