#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise, the actual number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(b);
		return (0);
	}

	r = read(o, b, letters);
	if (r == -1)
	{
		free(b);
		close(o);
		return (0);
	}

	w = write(STDOUT_FILENO, b, r);
	if (w == -1 || w != r)
	{
		free(b);
		close(o);
		return (0);
	}

	free(b);
	close(o);

	return (w);
}

