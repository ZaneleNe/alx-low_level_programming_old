#include <stdio.h>

/**
 * printTotalEvenFibValues - prints the total numbers in fibonachi sequence
 *
 * @range: fibonachi length
 * Return: nothing
 */
void printTotalEvenFibValues(int range)
{
	static long int first = 0, second = 1, total = 0, sum, i;

	for (i = 1; i <= range; i++)
	{
		sum = first + second;
		first = second;
		second = sum;

		if ((sum < 4000000) && (sum % 2 == 0))
			total += sum;
	}

	printf("%ld\n", total);
}

/**
 * main - finds and prints the sum of the even-valued terms of fibonachi
 *
 * Return: 0 on success
 */
int main(void)
{
	printTotalEvenFibValues(50);

	return (0);
}
