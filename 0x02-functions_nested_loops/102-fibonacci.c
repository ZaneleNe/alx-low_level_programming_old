#include <stdio.h>

/**
 * printFib - prints the fibonachi sequence
 *
 * @range: fibonachi length
 * Return: nothing
 */
void printFib(int range)
{
	static long int first = 0, second = 1, sum;

	if (range != 0)
	{
		sum = first + second;
		first = second;
		second = sum;

		printf("%ld", sum);

		if (range > 1)
			printf(", ");

		printFib(range - 1);
	}
	else
		printf("\n");
}

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
	printFib(50);

	return (0);
}
