#include <stdio.h>
#include <stdlib.h>

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
	int i, product = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			product *= atoi(argv[i]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
