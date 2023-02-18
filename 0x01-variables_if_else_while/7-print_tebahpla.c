#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char reverse_alphabet;

	for (reverse_alphabet = 'z'; reverse_alphabet >= 'a'; reverse_alphabet--)
		putchar(reverse_alphabet);
	putchar ('\n');

	return (0);
}
