#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */

int main(void)
{
	char input[MAX_LENGTH];

	while (1)
	{
		write(STDOUT_FILENO, PROMPT, _strlen(PROMPT));
		if (_fgets(input, MAX_LENGTH, stdin) == NULL)
		{
			break; /* Exit on EOF */
		}

		input[_strlen(input) - 1] = '\0'; /* Remove newline character */

		if (input[0] != '\0')
		{
			execute_command(input);
		}
	}
	return (0);
}
