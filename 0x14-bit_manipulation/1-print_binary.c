#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number ot print in binary
 */

void print_binary(unsigned long int n)
{
	int s = 0;
	int tally;
	unsigned long int number;

	for (s = 63; s >= 0; s--)
	{
		number = n >> s;

		if (number & 1)
	{
		_putchar('1');
		tally++;
	}
	else if (tally)
		_putchar('0');
	}
	if (!tally)
		_putchar('0');
}
