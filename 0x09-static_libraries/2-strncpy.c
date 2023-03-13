#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies at most an imputed number of bytes from src into dest
 * from src.
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: the maximum number of bytes to copied from src.
 * Return: A pointer to the resulting string destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;
	int index = 0;

	while (src[index++])
	src_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];
	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
