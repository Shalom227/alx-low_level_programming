#include "main.h"

/**
 * print_numbers - prints from 0 up to 9 followd by a new line
 *
 * Return: the numbers 0 up to 9
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
