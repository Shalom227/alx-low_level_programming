#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string containig binary numbers 1 and 0
 * Return: the converted number,or 0 if there's one or more chars in the string
 * b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int s;
	unsigned int number = 0;

	if (!b)
		return (0);
	for (s = 0; b[s]; s++)
	{
		if (b[s] < '0' || b[s] > '1')
			return (0);
		number = 2 * number + (b[s] - '0');
	}
	return (number);
}
