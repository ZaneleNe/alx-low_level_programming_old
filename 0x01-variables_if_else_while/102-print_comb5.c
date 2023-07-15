#include <stdio.h>

/**
 * printNum - prints integers using putchar
 *
 * @num: number to be printed
 * Return: returns nothing
 */
void printNum(int num)
{
	if (num > 9)
	{
		printNum(num / 10);
		num %= 10;
	}

	putchar(num + '0');
}

/**
 * main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
	/* Initializing some varibles */
	int start = 0, end = 1;

	while (start <= 98)
	{
		while (end <= 99)
		{
			if (start <= 9)
				putchar('0');
			printNum(start);
			putchar(' ');

			if (end <= 9)
				putchar('0');
			printNum(end);

			if (start != 98)
			{
				putchar(',');
				putchar(' ');
			}
			end++;
		}
		start++;
		end = start + 1;
	}
	putchar('\n');

	return (0);
}
