#include "main.h"

/**
 * _prime_helper - detects if an input number is a prime number.
 * @n: check for primality.
 * @i: for the loop that checks for divisibility.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int _prime_helper(int n, int i)
{
if (n <= 2)
{
return ((n == 2) ? 1 : 0);
}
if (n % i == 0)
{
return (0);
}
if (i * i > n)
{
return (1);
}
return (_prime_helper(n, i + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
return (_prime_helper(n, 2));
}

