#include "main.h"

/**
 * get_bit - Get the value of a bit at the given index.
 * @n: The number to evaluate.
 * @index: Index starting from 0 of the bit we want to get.
 *
 * Return: Value of bit at index, or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

