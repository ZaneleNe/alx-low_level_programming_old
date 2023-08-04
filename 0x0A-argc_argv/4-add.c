#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - programs main function
 * @argc: number of things typed in command line
 * @argv: array of string values for typed things
 * Return: returns the name of the program followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 1)
	{
		sum = contains_digits(argv, argc);
		if (sum >= 0)
			printf("%d\n", sum);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

/**
 * contains_digits - checks if an array only has digits
 * @argv: array to be checked
 * @argc: array size
 * Return: returns 1 if non digit found. Otherwise returns sum of numbers.
 */
int contains_digits(char *argv[], int argc)
{
	int i, j, sum = 0, length;

	for (i = 1; i < argc; i++)
	{
		length = strlen(argv[i]);
		for (j = 0; j < length; j++)
		{
			if (isdigit(argv[i][j]))
				continue;
			else
				return (-1);
		}
		sum += atoi(argv[i]);
	}
	return (sum);
}
