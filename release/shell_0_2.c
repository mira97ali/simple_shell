#include "main.h"

/**
 * main - Entry point of the program.
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
			break; /* Exit on EOF */
		}

		input[_strlen(input) - 1] = '\0'; /* Remove newline character */

		/* Parse the input into command and arguments */
		parse_input(input, &command, arguments);

		if (input[0] != '\0')
		{
			execute_command_with_args(shell_name, command, arguments);
		}
	}
	return (0);
}
