#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the decimal number to change.
 * @index: Index position to change.
 *
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}

