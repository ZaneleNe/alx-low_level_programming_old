#include "main.h"

/**
 * getStringLen - gets the length of the string
 * @s: string
 *
 * Return: length of the string
 */
int getStringLen(const char *s)
{
	int len = 0;

	if (!s)
		return (0);

	while (*s)
	{
		s++;
		len++;
	}

	return (len);
}

/**
 * power - finds power of all numbers. Where base is 2
 * @a: power
 *
 * Return: power of 2 to the power @a
 */
unsigned int power(int a)
{
	int index = 0;
	unsigned int total = 1;

	for ( ; index < a; index++)
		total *= 2;

	return (total);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: converted number
 *         or 0 if
 *         there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int index = 0, len = getStringLen(b);
	unsigned int sum = 0;

	if (!b)
		return (0);

	for ( ; *b; index++, b++)
	{
		len--;

		if ((*b >= 'a' && *b <= 'z') || (*b >= 'A' && *b <= 'Z'))
			return (0);

		if (len == 0)
			sum += (1 * (*b - '0'));
		else
		{
			if ((*b - '0') == 0)
				continue;
			else
				sum += (*b - '0') * power(len);
		}
	}

	return (sum);
}
