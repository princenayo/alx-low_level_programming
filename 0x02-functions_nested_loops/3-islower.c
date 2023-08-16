#include "main.h"

/**
*  _islower - checks for lowercase character
* @c: is the character to be checked
* Return: 1 for the lowercase, and 0 for the rest.
*/

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
