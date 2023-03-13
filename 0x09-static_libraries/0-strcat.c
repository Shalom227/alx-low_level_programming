#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenates two strings
* @dest: The destination string
* @src: The source string
* Return: A pointer to the resulting string destination
*/
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int i = 0;

	while (dest[dest_length])
	{
	dest_length++;
	}
	for (i = 0; src[i] != 0; i++)
	{
	dest[dest_length] = src[i];
	dest_length++;
	}
	dest[dest_length] = '\0';
	return (dest);
}
