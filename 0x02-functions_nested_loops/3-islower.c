#include "main.h"

/**
 * _islower - checks for lowercase character
 * Character c is to be checked
 * Return: 1 for lowercase character or 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}