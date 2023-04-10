#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints to the standard output, POSIX
 * @filename: text file that is read
 * @letters: number of letters that is to be read and printed
 * Return: the actual number of letters it could read and print
 * or 0 if the file can not be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t a, b, c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	c = read(a, buffer, letters);
	b = write(STDOUT_FILENO, buffer, c);

	free(buffer);
	close(a);

	return (b);
}
