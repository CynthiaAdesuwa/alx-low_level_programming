#include "main.h"
/**
 * helperfunction- returns 0 or 1
 * @n: The number to be checked
 * @i: possible factor of the number
 * Return: 0 if not prime, 1 if prime
 */
int helperfunction(int n, int i)
{
	if (i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperfunction(n, i + 1));
		}
	}
	else
		{
			return (1);
		}
}

/**
 * is_prime_number -  returns the 1 if n is prime
 * @n: The number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperfunction(n, 2));
	}
}
