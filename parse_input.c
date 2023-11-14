#include "main.h"

/**
 * parse_input - Parses input into command and arguments.
 * @input: The input string to parse.
 * @command: Pointer to store the command.
 * @arguments: Array to store the arguments.
 * Author: Amira.
 */

void parse_input(char *input, char **command, char **arguments)
{
	char *token;
	int arg_count;
	int i;

	arg_count = 0;
	*command = strtok(input, " ");

	for (i = 0; i < MAX_ARGUMENTS; i++)
	{
		arguments[i] = NULL;
	}

	while ((token = strtok(NULL, " ")) != NULL)
	{
		arguments[arg_count] = token;
		arg_count++;

		if (arg_count >= MAX_ARGUMENTS - 1)
		{
			break;
		}
	}

	for (i = arg_count; i > 0; i--)
	{
		arguments[i] = arguments[i - 1];
	}
	arguments[0] = *command;
}
