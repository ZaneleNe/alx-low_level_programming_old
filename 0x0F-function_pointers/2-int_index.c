#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: array size
 * @cmp: function pointer to compare values.
 *       returns -1 if there is no  match.
 *
 * Return: returns the index of the integer if it is found.
 *         returns -1 if the array size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || size == 0 || array == NULL || cmp == NULL)
		return (-1);

	for ( ; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
