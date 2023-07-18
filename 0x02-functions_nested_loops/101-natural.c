#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: nothing
 */
int main(void)
{
	int i, sum, mul3, mul5;

	sum = 0;

	for (i = 1; i <= (1024 / 3); i++)
	{
		if (!(i % 5 == 0))
		{
			mul3 = i * 3;
			sum += mul3;
		}
	}

	for (i = 1; i <= (1024 / 5); i++)
	{
		mul5 = i * 5;
		sum = sum + mul5;
	}

	printf("%d\n", sum);

	return (0);
}
