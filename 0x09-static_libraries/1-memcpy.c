#include "main.h"
/**
 * _memcpy - a program that copies memory area
 * @dest:the memory where is stored
 * @src: memory where is copied
 * @n: number of bytes used
 *
 * Return:  memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
