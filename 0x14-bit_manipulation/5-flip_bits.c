#include "main.h"

/**
 * flip_bits - Gets the number of bits to flip to get from n to m.
 * @n: Initial number.
 * @m: Final number.
 *
 * Return: The number of flipped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int count = 0;

	while (flipped != 0)
	{
		count += flipped & 1;
		flipped >>= 1;
	}

	return count;
}

