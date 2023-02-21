#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case using _putchar
 * Return: Nothing
*/

void print_alphabet(void)
{
	char c;
	/*we choose a variable name called c to represents all lowercase alphabets*/
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar (c);
	}
	_putchar('\n');
}
