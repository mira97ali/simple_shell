#include "main.h"


/**
 * _strncmp - Compare the first n characters of two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * @n: Number of characters to compare.
 * Author: Amira Benamara.
 * Return: The function returns an integer less than,
 *         equal to, or greater than zero if the first n
 *         characters of s1 are found to be less than, equal to, or
 *         greater than the first n characters of s2, respectively.
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		if (*s1 == '\0')
		{
			break;
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
