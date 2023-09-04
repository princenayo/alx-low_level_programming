#include <stdio.h>
#include "main.h"

/**
 * main - function that prints its name
 * @argc: counts of arguments
 * @argv: array of the arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
