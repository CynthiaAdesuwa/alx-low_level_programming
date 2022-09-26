#include "main.h"
/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return:  Pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s !+'\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		++s;
	}
	if (*s == c)
	{
		return (s + index);
	}
	return (0);/* values null*/
}
