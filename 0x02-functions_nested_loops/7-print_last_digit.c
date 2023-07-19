#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int nv;

	nv = n % 10;
	if (nv < 0)
	{
		nv = nv * -1;
	}
	_putchar(nv + '0');
	return (nv);
}
