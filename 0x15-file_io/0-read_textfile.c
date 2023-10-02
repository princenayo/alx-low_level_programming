#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - function that  reads and prints a text file
 *
 * @filename: name of the file to be read
 *
 * @letters: number of letters to read  and print
 *
 * Return: actual number of letters it could read and also print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp
	ssize_t ayor, ayow;
	char *buffer;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}
	ayor = read(fp, buffer, letters);
	close(fp);
	if (ayor == -1)
	{
		free(buffer);
		return (0);
	}
	ayow = write(STDOUT_FILENO, buffer, ayor);
	free(buffer);
	if (ayor != ayow)
		return (0);
	return (ayow);
}
