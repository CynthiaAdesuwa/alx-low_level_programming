#include <stdio.h>
/**
 * main - printing
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 57)
{										putchar(',');
putchar(' ');									}
}
				putchar('\n');
return (0);
}
