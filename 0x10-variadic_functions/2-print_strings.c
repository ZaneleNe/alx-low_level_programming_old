#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints numbers followed by a new line.
 * @separator: string that will separate the numbers if it is given.
 * @n: number of strings to be printed.
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *sep = separator;
	char *str;

	va_list list;

	va_start(list, n);

	for ( ; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
			if (sep != NULL && i < n - 1)
				printf("%s", sep);
		}
	}

	printf("\n");
	va_end(list);
}
