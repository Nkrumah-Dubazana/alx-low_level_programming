#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(void);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		perror("Error: Unable to allocate memory for buffer");
		exit(99);
	}

	return buffer;
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int ret;

	ret = close(fd);

	if (ret == -1)
	{
		perror("Error: Unable to close file descriptor");
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer();
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		perror("Error: Unable to open source file");
		free(buffer);
		exit(98);
	}

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		perror("Error: Unable to create or write to destination file");
		free(buffer);
		close_file(from_fd);
		exit(99);
	}

	do {
		bytes_read = read(from_fd, buffer, 1024);
		if (bytes_read == -1)
		{
			perror("Error: Unable to read from source file");
			free(buffer);
			close_file(from_fd);
			close_file(to_fd);
			exit(98);
		}

		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			perror("Error: Unable to write to destination file");
			free(buffer);
			close_file(from_fd);
			close_file(to_fd);
			exit(99);
		}

	} while (bytes_read > 0);

	free(buffer);
	close_file(from_fd);
	close_file(to_fd);

	return 0;
}

