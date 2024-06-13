#include "main.h"

/**
 * get_endianness - Checks whether a machine is big endian or little endian.
 *
 * Return: 1 if little endian, 0 if big endian.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	return (*endian);
}

