#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - finds sum of all its parameters
 * @n: number of arguments passed to function
 *
 * Return: returns the sum of all numbers passed to function.
 */
int sum_them_all(const unsigned int n, ...)
{
	/*Decalaring and intializing some helper varaibles*/
	int sum = 0;
	unsigned int i = 0;

	/*Declaring variable list*/
	va_list number_list;

	/*Logic to break out of function in case paramater list is zero.*/
	if (n == 0)
		return (0);

	/*Initializing list made above*/
	va_start(number_list, n);

	/*Accessing list elements and adding them*/
	for ( ; i < n; i++)
		sum += va_arg(number_list, int);

	/*Telling compiler that we have reached the end of our list*/
	va_end(number_list);

	return (sum);
}
