#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size
 * bytes each and returns a pointer to the allocated memory.
 * @nmemb: number of members
 * @size: the size of the memory to print
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;

	int l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
