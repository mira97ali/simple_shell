#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)
{
	char input[MAX_LENGTH];
	char *command;
	char *arguments[MAX_ARGUMENTS];
	char *exit_prompt = "exit\n";

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
			/* Handle "exit" */
			if (_strcmp(command, EXIT_COMMAND) == 0)
			{
				write(STDOUT_FILENO, exit_prompt, _strlen(exit_prompt));
				break; /* Break out of the loop to exit */
			}

			/* Handle other commands */
			handle_command(command, arguments);
		}
	}
	return (0);
}
