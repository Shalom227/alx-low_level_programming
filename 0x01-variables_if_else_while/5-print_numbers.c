#include <stdio.h>

/**
 * main - prints the all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
