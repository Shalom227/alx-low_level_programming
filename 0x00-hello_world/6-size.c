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

	printf("Size of int:%ld bytes\n", sizeof(int));
	printf("Size of longint:%ld bytes\n", sizeof(long int));
	printf("Size of float:%ld bytes\n", sizeof(float));
	printf("Size of char:%ld byte\n", sizeof(char));
	printf("Size of long longint:%ld byte\n", sizeof(long long int));
	
	return (0);
}
