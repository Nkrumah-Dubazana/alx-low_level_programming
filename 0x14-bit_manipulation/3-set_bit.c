#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: Pointer to the number to be used.
 * @index: Index to be set.
 *
 * Return: 1 on success, -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}

