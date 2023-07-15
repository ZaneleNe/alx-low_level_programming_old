#include <stdio.h>

/**
 * main - main function for program
 *
 * Return: 0 on success.
 */
int main(void)
{
	int first = 0, second = 1, third = 2;

	for ( ; first <= 7; first++)
	{
		for (second = 1 + first; second <= 8; second++)
		{
			for (third = 2 + (second - 1); third <= 9; third++)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');

				if (third == 9 && second == 8 && first == 7)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
