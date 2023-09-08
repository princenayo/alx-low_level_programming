#include "main.h"
#include <stdlib.h>

/**
 * array_range - To creates array of integers
 * @min: minimum array value.
 * @max: maximum array value.
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arry, ind, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arry = malloc(sizeof(int) * size);

	if (arry == NULL)
		return (NULL);

	for (ind = 0; ind < size; ind++)
		arry[ind] = min++;

	return (arry);
}
