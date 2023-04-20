#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * print_all - a function that prints anything
 * @format: the format to print a value
 */

void print_all(const char * const format, ...)
{
	va_list al;
	char *str;
	int i;

	i = 0;
	va_start(al, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(al, int));
				break;
			case 'f':
				printf("%f", va_arg(al, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(al, int));
				break;
			case 's':
				str = va_arg(al, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c'
		|| format[i] == 'i'
		|| format[i] == 'f'
		|| format[i] == 's')
		&& format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(al);
}
