#include "holberton.h"

/**
 * _abs - computes absolute value of a number
 * @n : is the number to be determined.
 *
 * Return: returns abs value
 */

void print_to_98(int n)
{
int i;
for (i = 0; i <= n; i++)
{
printf("%d", i);
if (i < n)
{
putchar(',');
putchar(' ');
}
}
}
