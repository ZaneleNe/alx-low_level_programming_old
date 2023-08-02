#include "mainn.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to be printed
 * Return: returns nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}