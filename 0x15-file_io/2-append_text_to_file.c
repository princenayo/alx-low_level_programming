#include "main.h"

/**
 * append_text_to_file - appends text at end of the file
 * @filename: file name to be apended
 * @text_content:  content to be added
 *
 * Return: 1 if the file existed. -1 if it does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int dav;
	int numb;
	int rw;

	if (!filename)
		return (-1);

	dav = open(filename, O_WRONLY | O_APPEND);

	if (dav == -1)
		return (-1);

	if (text_content)
	{
		for (numb = 0; text_content[numb]; numb++)
			;

		rw = write(dav, text_content, numb);

		if (rw == -1)
			return (-1);
	}

	close(dav);

	return (1);
}
