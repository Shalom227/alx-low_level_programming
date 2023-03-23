#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 * @...: a varaible number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int index;
	char *str;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);
				if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
