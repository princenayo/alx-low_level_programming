#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip.
 * @n: Unsigned long int
 * @m: Unsigned long int
 *
 * Return: The number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int outcome = n ^ m;
	unsigned int number = 0;

	while (outcome > 0)
	{
		number += outcome & 1;
		outcome >>= 1;
	}

	return (number);
}
