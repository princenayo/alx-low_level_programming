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
	int df;
	ssize_t nayo, dav;
	char *buf;

	if (filename == NULL)
		return (0);

	df = open(filename, O_RDONLY);
	if (df == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(df);
		return (0);
	}

	nayo = read(df, buf, letters);
	if (nayo == -1)
	{
		free(buf);
		close(df);
		return (0);
	}

	dav = write(STDOUT_FILENO, buf, nayo);
	if (dav == -1 || dav != nayo)
	{
		free(buf);
		close(df);
		return (0);
	}

	free(buf);
	close(df);

	return (dav);
}
