#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the number of arguments passed to it
 * @argc: number of arguments passed
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
		printf("%d\n", argc - 1);

		return (0);
}
