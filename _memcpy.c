#include "main.h"

/**
 * _memcpy - Copy n bytes from source to destination.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 * Author: Amira Benamara.
 * Return: The function returns a pointer to the destination memory area.
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	char *d = (char *)dest;
	const char *s = (const char *)src;

	/* Copy n bytes from src to dest */
	while (n--)
	{
		*d++ = *s++;
	}

	return (dest);
}
