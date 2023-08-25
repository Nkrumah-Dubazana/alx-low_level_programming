#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the characters to search for.
 *
 * Return: Pointer to the first occurrence in @s of any of the characters in @accept,
 *         or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *a = accept;
        while (*a)
        {
            if (*s == *a)
                return (s);
            a++;
        }
        s++;
    }
    return (NULL);
}

