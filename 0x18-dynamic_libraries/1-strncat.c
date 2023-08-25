#include "main.h"

/**
 * strrncat - Concatenates n bytes from src to dest.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to concatenate from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
