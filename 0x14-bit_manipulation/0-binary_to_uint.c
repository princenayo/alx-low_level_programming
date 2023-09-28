#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - The function converts a binary number to an unsigned int
 * @b: The pointer to a string of 0 and 1 chars
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int data = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		data = (data << 1) + (*b - '0');
		b++;
	}

	return (data);
}
