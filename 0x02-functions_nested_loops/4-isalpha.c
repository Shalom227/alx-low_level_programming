#include "main.h"

/**
 * _islower - checks for alphabetic character
 * @c: Character c is to be checked
 * Return: 1 for lowercase character or 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 122) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
