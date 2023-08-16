#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 *                  element of an array.
 * @array: array to be looped throguh.
 * @size: size of the array
 * @action: performs some printing operation on an element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (size > 0 && array != NULL && action != NULL)
		for ( ; i < size; i++)
			action(array[i]);
}
