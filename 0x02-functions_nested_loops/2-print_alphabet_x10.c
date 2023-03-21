#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int n = 'a';
	int i = 0;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		i++;
		_putchar('\n');
	}
}
