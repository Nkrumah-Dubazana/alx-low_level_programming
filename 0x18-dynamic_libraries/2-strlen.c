#include "main.h"

/**
 * _strlen.c - Computes the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len;
	
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
