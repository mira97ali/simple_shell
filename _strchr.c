#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @str: The string to search.
 * @c: The char to be located.
 * Author: Benamara Amira.
 * Return: If the char is found, a pointer to the first occurrence is returned.
 *         If the char is not found, return NULL.
 */

char *_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *) str);
		}
		str++;
	}

	/* Check for the null character if c is 0 */
	if (c == 0)
	{
		return ((char *) str);
	}

	return (NULL); /* If character is not found, return NULL */
}
