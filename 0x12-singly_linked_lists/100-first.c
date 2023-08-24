#include <stdio.h>

/**
 * premain - function that runs before main
 *
 * Return: nothing
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house uponmy back!\n");
}
