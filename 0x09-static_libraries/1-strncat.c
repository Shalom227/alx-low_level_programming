#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings using at most an imputed no of bytes
 * from src.
 * @dest: The string to be appended upon
 * @src: The source string to be appended to destination
 * @n: the number of bytes from src to be appended to destination
 * Return: A pointer to the resulting string destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int index = 0;

	while (dest[index++])
	dest_length++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_length++] = src[index];

	return (dest);
}
