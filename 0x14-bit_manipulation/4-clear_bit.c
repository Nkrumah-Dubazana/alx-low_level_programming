#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the decimal number to change.
 * @index: Index position to change.
 *
 * Return: 1 if it worked, -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	if ((*n & mask) != 0)
		*n ^= mask;

	return (1);
}

