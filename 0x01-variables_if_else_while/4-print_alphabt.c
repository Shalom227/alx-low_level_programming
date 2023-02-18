#include <stdio.h>

/**
 * main - prints lowercase alphabets except q and e
 * Return: Always 0
 */
int main(void)
{

	char alphabets_qe;

	for (alphabets_qe = 'a'; alphabets_qe <= 'z'; alphabets_qe++)
	{
		if (alphabets_qe != 'q' && alphabets_qe != 'e')
			putchar(alphabets_qe);
	}
	putchar('\n');
	return (0);
}
