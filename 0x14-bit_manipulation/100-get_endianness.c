#include "main.h"

/**
 * get_endianness - checks for big or small endian
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int s = 1;
	char *a = (char *) &s;

	return (*a);
}
