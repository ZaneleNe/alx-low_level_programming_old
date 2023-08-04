#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - programs main function
 * @argc: number of things typed in command line
 * @argv: array of string values for typed things
 * Return: returns the name of the program followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again
 */
int main(int argc, char *argv[])
{
	int coins[] = {1, 2, 5, 10, 25};
	int coins_needed = 0, money = 0;
	int *m = &money, *c = &coins_needed;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money > 0)
		{
			if (money >= 25)
				calculate_coins(m, coins, c, 25);
			else if (money >= 10 && money < 25)
				calculate_coins(m, coins, c, 10);
			else if (money >= 5 && money < 10)
				calculate_coins(m, coins, c, 5);
			else if (money >= 2 && money < 5)
				calculate_coins(m, coins, c, 2);
			else
				calculate_coins(m, coins, c, 1);
			printf("%d\n", coins_needed + money);
		}
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
 * calculate_coins - checks if an array only has digits
 * @money: money to be changed
 * @coins: array of the standardized coins
 * @coin_count: number of coins to be returned
 * @divider: coin to initially divide money
 * Return: returns nothing.
 */
void calculate_coins(int *money, int coins[], int *coin_count, int divider)
{
	int remainder, s = 0, i = 0, temp = 0;

	remainder = *money % divider;
	*money /= divider;

	if (remainder > 9)
	{
		while (remainder > 9)
		{
			*money += (remainder / 10);
			remainder %= 10;
		}
	}
	if (remainder < 10)
	{
		*money += (remainder / 2);
		remainder %= 2;
	}
	while (s != remainder)
	{
		if (i == 4)
		{
			i = 0;
			temp = 0;
		}
		temp += coins[i];
		if (temp <= remainder)
		{
			s += coins[i];
			*coin_count += 1;
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
}
