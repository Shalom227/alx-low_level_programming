#include "main.h"

/**
 * reverse_array - reverses the contents of arrays of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp = 0;
	int index = 0;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}


