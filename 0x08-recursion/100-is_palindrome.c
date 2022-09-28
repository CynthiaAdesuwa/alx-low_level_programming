#include "main.h"
/**
 * is_palindrome - returns the l if s is a palindrome
 * @s: string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int flag = 1;

	return (check, _strlen_recursion(s) - 1));
}

/**
 * check -  checks if a string is a palindrome
 * @s: string to be checked
 * @start: start index
 * @end: end index
 * @flag: flag to indicate if a string is a palindrome
 * Return: void
 */
int check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}
