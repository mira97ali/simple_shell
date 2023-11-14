#include "main.h"

/**
 * _strcmp - Comparing two strings.
 * @str1: The first string.
 * @str2: The second string.
 * Author: Amira.
 * Return: 0 if the strings are equal, a negative if str1 is less than str2,
 *         or a positive value if str1 is bigger than str2.
 */

int _strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*(const unsigned char *)str1 - *(const unsigned char *)str2);
}
