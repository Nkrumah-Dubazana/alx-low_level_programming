#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL, return -1.
 *         If the file does not exist or the user lacks write permissions, return -1.
 *         Otherwise, return 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write_status = write(fd, text_content, len);
	if (write_status == -1)
		return (-1);

	close(fd);

	return (1);
}

