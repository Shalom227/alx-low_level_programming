#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on fail i.e if file can not be created or written
 */

int create_file(const char *filename, char *text_content)
{
	int abs;
	int j;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	abs = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(abs, text_content, length);

	if (abs == -1 || j == -1)
		return (-1);

	close(abs);

	return (1);
}
