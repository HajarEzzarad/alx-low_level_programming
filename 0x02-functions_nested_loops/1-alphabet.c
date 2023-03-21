#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
