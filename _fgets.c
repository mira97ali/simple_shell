#include "main.h"

/**
 * _fgets - Read characters and store them in the string.
 * @str: The buffer to store the read characters.
 * @num: The maximum number of characters to read.
 * @stream: The stream to read characters from.
 * Author: Amira Benamara.
 * Return: On success, the function returns the input buffer.
 * If an error occurs, returns NULL.
 */

char *_fgets(char *str, int num, FILE *stream)
{
	int i;
	int ch;

	/* Check for valid input parameters */
	if (!str || num <= 0 || !stream)
	{
		return (NULL);
	}

	i = 0;
	while (i < num - 1)
	{
		ch = fgetc(stream);
		if (ch == EOF)
		{
			/* If no characters were read and EOF is encountered, return NULL */
			if (i == 0)
			{
				return (NULL);
			}
			break;
		}

		str[i] = ch;
		i++;

		if (ch == '\n')
		{
			break;
		}
	}

	/* Null-terminate the string */
	str[i] = '\0';

	return (str);
}
