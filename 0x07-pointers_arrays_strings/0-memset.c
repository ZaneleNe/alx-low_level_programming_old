#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: array
 * @b: byte to fill array memory ares.
 * @n: array size
 * Return: returns pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0, max = n;

	for ( ; i < max; i++)
		s[i] = b;
	return (s);
}
