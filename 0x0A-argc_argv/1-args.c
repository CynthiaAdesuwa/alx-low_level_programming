#include <stdio.h>
#include "main.h"
/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: Count arguements
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);
	return (0);
}
