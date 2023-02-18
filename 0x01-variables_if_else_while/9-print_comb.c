#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers.
 * * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		putchar(num + '0');
		if (num < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
