#include "main.h"
/**
 * _abs - a function that computes the absolute value of integer
 * @abs: integer input
 * Return: absolute value of an integer
 */
int _abs(int abs)
{
	return (abs * ((abs > 0) - (abs < 0)));
}
