#include <stdio.h>

/**
 * main - main function for program
 *
 * Return: 0 on success.
 */
int main(void)
{
	int min = 0, max = 8, index;

	for ( ; min <= max; min++)
	{
		for (index = 1 + min; index <= max + 1; index++)
		{
			putchar(min + '0');
			putchar(index + '0');
			if (min == 8 && index == 9)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
