#include <stdio.h>

/**
 * printFib - prints the total numbers in fibonachi sequence
 *
 * @range: fibonachi length
 * Return: nothing
 */
void printFib(unsigned long int range)
{
	static unsigned long int first = 0, second = 1, sum, i;

	for (i = 1; i <= range; i++)
	{
		sum = first + second;
		first = second;
		second = sum;

		printf("%lu", sum);

		if (i < range)
			printf(", ");
	}
	printf("\n");
}

/**
 * main - prints 98 fibonachi values
 *
 * Return: 0 on success
 */
int main(void)
{
	printFib(98);

	return (0);
}
