#include "main.h"

/**
 * _strcat - Concatenate source string to the end of destination string.
 * @dest: Ptr to the destination string.
 * @src: Ptr to the source string.
 * Author: Amira Benamara.
 * Return: The function returns a pointer to the destination string.
 */

char *_strcat(char *dest, const char *src)
{
	char *original_dest = dest;

	/* Move the pointer to the end of dest string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy src to the end of dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Null-terminate the resulting string */
	*dest = '\0';

	return (original_dest);
}
