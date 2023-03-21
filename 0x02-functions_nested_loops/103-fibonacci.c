#include <stdio.h>
/**
 * main - enter point
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float fib_sum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum >  4000000)
			break;
		if ((sum % 2) == 0)
			fib_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", fib_sum);
	return (0);
}
