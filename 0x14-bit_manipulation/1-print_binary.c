#include "main.h"

/**
 * print_binary - Prints a binary representation of a number
 * @n: The unsigned long int to be printed.
 *
 * Return: None
 */
void print_binary(unsigned long int n)
{
	unsigned long int data;
	int i, size = 0;

	for (i = 63; i >= 0; i--)
	{
		data = n >> i;

		if (data & 1)
		{
			_putchar('1');
			size++;
		}
		else if (size)
			_putchar('0');
	}
	if  (!size)
		_putchar('0');
}
