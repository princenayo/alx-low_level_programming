#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to a given index
 * @n: Pointer to an unsigned long int.
 * @index: Index, starting from 0.
 *
 * Return: 1 if it worked, or -1 if it failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
