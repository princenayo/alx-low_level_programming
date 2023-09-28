#include "main.h"

/**
 * binary_to_uint - The function converts a binary number to an unsigned int
 * @b: The pointer to a string of 0 and 1 chars
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int data = 0;
	int j;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		data = 2 * data + (b[j] - '0');

	}

	return (data);
}
