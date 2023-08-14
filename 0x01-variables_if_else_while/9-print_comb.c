#include <stdio.h>

/**
 * main - program starting point
 * Return: 0 
 */

int main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
