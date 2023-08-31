#include "main.h"

/**
 * loop_through_binary - loops through decimal in binary representation
 * @n: number to be looped through
 * @s_index: specified index
 * @index: bit counter
 * @bit_ptr: pointer to bit
 *          pointer will be derefenced to set new bit value.
 *
 * Return: nothing
 */
void loop_through_binary(unsigned long int n, unsigned int s_index,
			 unsigned int index, int *bit_ptr)
{
	if (n > 1)
		loop_through_binary(n >> 1, s_index, index + 1, bit_ptr);

	if (s_index == index)
		*bit_ptr = n & 1;
}

/**
 * get_bit - gets bit at a given index.
 * @n: number containing bits
 * @index: index of bit
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = -1;
	int *bit_ptr = &bit;

	loop_through_binary(n, index, 0, bit_ptr);

	return (bit);
}
