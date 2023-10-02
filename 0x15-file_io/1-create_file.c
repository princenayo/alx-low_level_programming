#include "main.h"

/**
 * create_file -  creates a file with specific conditions
 * @filename: filename to be created
 * @text_content: The content of the file.
 *
 * Return: 1 if it is successful, -1 if it failed.
 */
int create_file(const char *filename, char *text_content)
{
	int nayo
	int numb;
	int rwr;

	if (!filename)
		return (-1);

	nayo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (nayo == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numb = 0; text_content[numb]; numb++)
		;

	rwr = write(nayo, text_content, numb);

	if (rwr == -1)
		return (-1);

	close(nayo);

	return (1);
}
