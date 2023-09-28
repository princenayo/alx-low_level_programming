#include "main.h"

/**
 * get_endianness - A function that checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	unsigned int data = 1;
	char *nayo = (char *)&data;

	if (*nayo == 1)
		return (1);
	else
		return (0);
}
