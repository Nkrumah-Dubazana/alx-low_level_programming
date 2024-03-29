#include "main.h"

/**
 * _strmp - compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compred
 *
 * Return: Negative if s1 < s2, 0 if equal
 */
int _strmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 =='\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
