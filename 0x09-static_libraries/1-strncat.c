#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * using atmost n bytes from src
 * @dest: the input value
 * @src: the input value
 * @n: an input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int j;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[k] = src[j];
	k++;
	j++;
	}
	dest[k] = '\0';
	return (dest);
}
