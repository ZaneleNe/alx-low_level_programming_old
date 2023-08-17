#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * is_null - checks whether given string is null.
 * @s: string to be checked.
 *
 * Return: (nil) if string is empty
 *         returns @s if not empty.
 */
char *is_null(char *s)
{
	if (s != NULL)
		return (s);
	return ("(nil)");
}

/**
 * print_all - prints anything follwed by new line at the end.
 *             function will ignore types not listed below.
 *             function will print a maximum of 9 variables.
 * @format: list of types of arguments passed:
 *          c - char, i - integer, f - float
 *          s - char * (print (nil) is string is empty)
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	const char *s = format, *s1 = format;
	int str_len = 0, i = 0, put_separator = 1;

	va_list list;

	va_start(list, format);

	while (*s)
	{
		str_len++;
		s++;
	}
	while (i < str_len)
	{
		switch (*s1)
		{
		case 'c':
			printf("%c", (char)va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 's':
			printf("%s", is_null(va_arg(list, char *)));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		default:
			put_separator = 0;
		}

		if (i < str_len - 1 && put_separator)
			printf(", ");
		put_separator = 1;
		i++;
		s1++;
	}
	printf("\n");
	va_end(list);
}
