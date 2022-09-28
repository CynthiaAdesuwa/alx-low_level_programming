#include "main.h"
/**
 * _sqrt - Returns the square root of a number
 * @n: test number
 * @x: squared number
 * Return: the square root of n.
 */
int _sqrt(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if (x * x == n)
		return (-1);
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to be used.
 * Return: the natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(0, n));
}
