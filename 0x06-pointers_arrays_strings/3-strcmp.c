#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares pointers to two strings.
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 * @n: the maximum number of bytes to copied from src.
 * Return: If  str1 < str2, the negative difference of the 1st unmatched charac
 * If str1 = str2, 0.
 * if str1 > str2, the positive differnce of the first unmathced character
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


