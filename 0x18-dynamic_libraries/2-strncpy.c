#include "main.h"

/**
 * _strncpy - Copies up to n characters from src to dest
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to copy from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
