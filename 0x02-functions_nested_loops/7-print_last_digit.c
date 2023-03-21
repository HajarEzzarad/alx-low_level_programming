#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @d: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int d)
{
	int pd;

	pd = (d % 10);

	if (pd < 0)
	{
		pd = (-1 * pd);
	}
	_putchar(pd + '0');
	return (pd);
}
