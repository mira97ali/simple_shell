#include "main.h"

/**
 * _strlen - Computing the length of a string.
 * @str: The string.
 * Author: amira.
 * Return: The length of the string.
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
