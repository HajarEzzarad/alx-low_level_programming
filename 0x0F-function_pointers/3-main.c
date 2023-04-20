#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 (Success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	p = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(p) == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*p == '/' && n2 == 0) || (*p == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
}
