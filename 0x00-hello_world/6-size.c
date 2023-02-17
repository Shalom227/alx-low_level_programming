#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int inttype;
	long int longint;
	float floattype;
	char chartype;
	long long int longlongint;

	printf("Size of char:%ld bytes\n", sizeof(char));
	printf("Size of int:%ld bytes\n", sizeof(int));
	printf("Size of long int:%ld bytes\n", sizeof(long int));
	printf("Size of long long int:%ld byte\n", sizeof(long long int));
	printf("Size of float:%ld byte\n", sizeof(float));
	return (0);
}
