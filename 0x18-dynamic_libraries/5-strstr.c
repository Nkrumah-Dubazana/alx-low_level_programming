#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be found.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *h = haystack;
        char *n = needle;

        while (*n && (*h == *n))
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return (haystack);

        haystack++;
    }

    return (NULL);
}
