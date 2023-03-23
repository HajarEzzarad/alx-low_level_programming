#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number
 * Return: _ if n is greater than 0, else \n
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
