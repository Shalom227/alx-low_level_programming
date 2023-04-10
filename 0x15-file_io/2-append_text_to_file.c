#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: -1 if filename is NULL, 1 if file exists & -1 if file doesn't exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int s;
	int a;
	int length;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	s = open(filename,  O_WRONLY | O_APPEND);
	a = write(s, text_content, length);

	if (s == -1 || a == -1)
		return (-1);
	close(s);
	return (1);
}
