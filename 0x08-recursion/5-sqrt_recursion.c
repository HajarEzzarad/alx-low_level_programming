#include "main.h"


/**
 * _sqrt_helper - a function that recurses
 * to find the natural square root of a number
 * @n: input number
 * @i: iterator
 * Return: a square root
 */
int _sqrt_helper(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: input number
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_helper(n, 0));
}
