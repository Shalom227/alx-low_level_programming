#include <stdio.h>


/**
 * main - prints the all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{

	int num;

	for (num = 10; num <= 9; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
