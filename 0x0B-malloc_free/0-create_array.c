#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: The size of the array
 * @c: the character to fill in the array
 * Return: the array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}
