#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: Count arguments
 * @argv: Aray of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - Print each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
}
