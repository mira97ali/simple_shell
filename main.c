#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char input[MAX_LENGTH];
	char *shell_name;

	(void)argc;

	shell_name = argv[0];

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
			execute_command(shell_name, input);
		}
	}
	return (0);
}
