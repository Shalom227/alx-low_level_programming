#include "main.h"

/**
 * factorial - Returns the factorial of a given factor
 * @n: the number to find the factorial of.
 * Return: if n > 0 - the factorial of n.
 *	if n < 0 - 1 to indicate error.
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
