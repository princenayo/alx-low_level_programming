#include "main.h"
/**
 * _strlen -a function that  returns the length of a string
 * @s: string to return
 * Return: length of string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
