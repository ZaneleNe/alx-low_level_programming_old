#include "main.h"

/**
 * get_length - gets the length of a string
 * @n: increment number
 * @s: string
 * Return: returns the length of the string in integer
 */
int get_length(int n, char *s)
{
	if (*s != '\0')
		s++;
	else
		return (0);
	return (n + get_length(n, s));
}

/**
 * compare_strings - reverses a string
 * @n: incrementer
 * @s: string to be reversed
 * @word_length: length of the string
 * @is_same: holds either 1 or 0
 * Return: returns is_same value
 */
int compare_strings(int n, char *s, int word_length, int is_same)
{
	if (n < word_length / 2)
	{
		if (s[n] == s[word_length - n - 1])
			is_same = 1;
		else
			is_same = 0;
	}
	else
		return (is_same);
	return (compare_strings(n + 1, s, word_length, is_same));
}

/**
 * is_palindrome - checks whether a string is palindrome
 * @s: string to be checked
 * Return: returns 0 if false otherwise 1
 */
int is_palindrome(char *s)
{
	if (compare_strings(0, s, get_length(1, s), 0) == 1)
		return (1);
	return (0);
}
