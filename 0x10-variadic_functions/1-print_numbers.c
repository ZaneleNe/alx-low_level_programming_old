#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: string that will separate the numbers if it is given.
 * @n: number of integers to be printed.
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *sep = separator;
	int num;

	va_list list;

	va_start(list, n);

	for ( ; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);

		if (sep != NULL && i < n - 1)
			printf("%s", sep);
	}
	printf("\n");
	va_end(list);
}
