#include "main.h"

/**
 * _strcpy - Copies the string pointed to by @src, including the null byte,
 *           to the buffer pointed to by @dest.
 * @dest: The buffer to copy the string to.
 * @src: The string to be copied.
 *
 * Return: Pointer to @dest.
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return dest_start;
}
