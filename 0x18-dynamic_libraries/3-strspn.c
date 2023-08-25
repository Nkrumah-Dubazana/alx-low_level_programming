#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of @s which
 *         consist only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int matched;

    while (*s)
    {
        matched = 0;
        while (*accept)
        {
            if (*s == *accept)
            {
                count++;
                matched = 1;
                break;
            }
            accept++;
        }

        if (matched == 0)
            break;

        s++;
        accept = accept - count;
    }

    return (count);
}
