#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	printf("Size of int: %ld bytes\n", sizeof(int));
	printf("Size of unsigned char: %ld bytes\n", sizeof(unsigned char));
	printf("Size of float: %ld bytes\n", sizeof(float));
	printf("Size of char: %ld byte\n", sizeof(char));
	printf("Size of short: %ld byte\n", sizeof(short));
	printf("Size of unsigned short: %ld byte\n", sizeof(unsigned short));
	printf("Size of unsigned int: %ld byte\n", sizeof(unsigned int));
	printf("Size of unsigned long: %ld byte\n", sizeof(unsigned long));
	printf("Size of long: %ld byte\n", sizeof(long));
	return (0);
}
