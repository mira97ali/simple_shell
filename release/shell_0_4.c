#include "main.h"

/**
 * main - Entry point.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 * Author: Amira Benamara.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char input[MAX_LENGTH];
	char *command;
	char *arguments[MAX_ARGUMENTS];
	char *shell_name;

	(void)argc;

	signal(SIGINT, interrupt_control_c);

	shell_name = argv[0];

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, PROMPT, _strlen(PROMPT));
		}
		if (_fgets(input, MAX_LENGTH, stdin) == NULL)
		{
			break;
		}

		input[_strlen(input) - 1] = '\0';

		parse_input(input, &command, arguments);

		if (input[0] != '\0')
		{
			/* Handle "exit" */
			if (_strcmp(command, EXIT_COMMAND) == 0)
			{
				exit(0);
			}

			handle_command(shell_name, command, arguments);
		}
	}
	return (0);
}
