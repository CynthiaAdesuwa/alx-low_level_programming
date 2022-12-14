#include "main.h"
/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{ 
	if (s == '\0')
		return (1);
	return (checks(0, _strlen_recursion(s) - 1));
}

