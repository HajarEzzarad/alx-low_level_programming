#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ac;
	unsigned int i;

	va_start(ac, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ac, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ac);
}
