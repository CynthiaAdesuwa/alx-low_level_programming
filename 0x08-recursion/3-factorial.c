#include "main.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 * Return: the factorial of the number
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	result *= factorial(n - 1);
	return (result);
}
