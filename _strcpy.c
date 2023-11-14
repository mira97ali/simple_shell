#include "main.h"

/**
 * _strcpy - Copies a string.
 * @dest: The destination buffer.
 * @src: The source string.
 * Author: Amira.
 * Return: A pointer to the destination buffer.
 */

char *_strcpy(char *dest, const char *src)
{
	char *original_dest = dest;

	/* Copy src to dest byte by byte */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add the null terminator */
	*dest = '\0';

	return (original_dest);
}
