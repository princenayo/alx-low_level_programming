#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments in the array
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
