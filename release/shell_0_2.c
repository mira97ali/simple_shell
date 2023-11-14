#include "main.h"

/**
 * main - Entry point of the program.
 * Author: Amira Benamara.
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
			break; /* Exit on EOF */
		}

		input[_strlen(input) - 1] = '\0'; /* Remove newline character */

		/* Parse the input into command and arguments */
		parse_input(input, &command, arguments);

		if (command != NULL)
		{
			execute_command_with_args(command, arguments);
		}
	}
	return (0);
}
