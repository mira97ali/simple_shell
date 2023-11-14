#include "main.h"

/**
 * _strdup - Duplicates a string in dynamically allocated memory.
 * @s: The string to duplicate.
 * Author: Amira.
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */

char *_strdup(const char *s)
{
	size_t len;
	char *copy;

	/* Calculate the length of the string. */
	len = _strlen(s) + 1;

	/* Allocate memory for the new string, including space for null terminator. */
	copy = (char *)malloc(len);

	/* Check if memory allocation succeeded. */
	if (copy == NULL)
		return (NULL);

	/* Copy the string, including the null terminator. */
	_memcpy(copy, s, len);

	return (copy);
}
