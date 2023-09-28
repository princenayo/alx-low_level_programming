#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: Unsigned long int
 * @index: Index, starting from 0 of the bit you wish to get
 *
 * Return: The value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
