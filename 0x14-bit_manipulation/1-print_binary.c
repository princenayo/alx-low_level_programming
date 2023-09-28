#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints a binary representation of a number
 * @n: The unsigned long int to be printed.
 *
 * Return: None
 */
void print_binary(unsigned long int n)
{
	unsigned long int data = 1;
	int size = sizeof(unsigned long int) * 8;
	int i;

	data <<= (size - 1);

	for (i = 0; i < size; i++)
	{
		if ((n & data) == 0)
			_putchar('0');
		else
			_putchar('1');

		data >>= 1;
	}

	_putchar('\n');
}
