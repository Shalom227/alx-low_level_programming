#include "main.h"

/**
 * flip_bits - flips one number to another
 * @n: the first number ot flip
 * @m: the the second number that is flipped to
 * Return: the number of bits that is needed to flip one number to the other
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s = 0, increase = 0;
	unsigned long int past = 0;
	unsigned long int future = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		past = future >> s;
		if (past & 1)
			increase++;
	}
	return (increase);
}
