
#include "main.h"

/**
 * _puts - Prints a string followed by aa newline.
 * @str: The input string to be printed.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
