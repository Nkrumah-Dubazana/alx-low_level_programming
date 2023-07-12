#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints its contents to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * 
 * Return: The actual number of letters read and printed, or -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - Creates a file with the specified name and writes the given content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 * 
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - Appends the given content to an existing file.
 * @filename: The name of the file to append to.
 * @text_content: The content to append to the file.
 * 
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */

