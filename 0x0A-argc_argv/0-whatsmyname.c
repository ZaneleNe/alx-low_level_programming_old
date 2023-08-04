#include <stdio.h>

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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
