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
	int dif, numb = 0;

	if (filename == NULL)
		return (-1);

	dif = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (dif == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[numb])
			numb++;

		if (write(dif, text_content, numb) != numb)
		{
			close(dif);
			return (-1);
		}
	}

	close(dif);

	return (1);
}
