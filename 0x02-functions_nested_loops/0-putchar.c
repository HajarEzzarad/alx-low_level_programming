#include "main.h"
/**
 * main - a program that prints _putchar, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
