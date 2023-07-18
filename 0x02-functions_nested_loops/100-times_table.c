#include "main.h"

/**
 * printNum - prints a given number with putchar
 *
 * @n: number to be printed
 * Return: nothing
 */
void printNum(int n)
{
	if (n > 9)
	{
		printNum(n / 10);
		n = n % 10;
	}
	_putchar(n + '0');
}

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: times table
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, product, future_product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				future_product = i * (j + 1);

				if (j < n)
				{
					printNum(product);
					_putchar(',');

					if (future_product <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (future_product > 99)
					{
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
					}
				}

				if (j == n)
					printNum(product);
			}
			_putchar('\n');
		}
	}
}
