#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to be printed.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit_position;
	int flag = 0;

	for (bit_position = 63; bit_position >= 0; bit_position--)
	{
		unsigned long int bit = n >> bit_position;

		if (bit & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || bit_position == 0)
			_putchar('0');
	}
}

