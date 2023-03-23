#include "function_pointers.h"

/**
 * array_iterator - executes a function in an array
 * @size: size of the array
 * @action: a pointer to the function to be used
 * @array: a collection of items of same data type stored at memory locations
 *Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
