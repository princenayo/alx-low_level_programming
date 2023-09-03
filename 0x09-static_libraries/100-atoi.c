#include "main.h"
/**
 * _atoi - a program that converts a string into an integer.
 * @s: string to be used.
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1, j = 0;
	unsigned int res = 0;

	while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
	{
		if (s[j] == '-')
			sign *= -1;
		j++;
	}
	while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
	{
		res = (res * 10) + (s[j] - '0');
		j++;
	}
	res *= sign;
	return (res);
}
