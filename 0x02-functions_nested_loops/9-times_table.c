#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Return: times table
 */
void times_table(void)
{
	int row, col, dig;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			dig = (row * col);
			if ((dig / 10) > 0)
			{
				_putchar((dig / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dig % 10) + '0');
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
