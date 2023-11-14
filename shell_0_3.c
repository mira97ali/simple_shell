#include "main.h"

/**
 * main - Entry point.
 * Author: Amira.
 * Return: Always 0.
 */

int main(void)
{
	char input[MAX_LENGTH];
	char *command;
	char *arguments[MAX_ARGUMENTS];

	while (1)
	{
		write(STDOUT_FILENO, PROMPT, _strlen(PROMPT));
		if (_fgets(input, MAX_LENGTH, stdin) == NULL)
		{
			break;
		}

		input[_strlen(input) - 1] = '\0';

		parse_input(input, &command, arguments);

		if (command != NULL)
		{
			handle_command(command, arguments);
		}
	}
	return (0);
}
