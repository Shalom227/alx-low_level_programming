#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the length of string to be gotten
 * Return: The length of the string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
