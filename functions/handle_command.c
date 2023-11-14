#include "../main.h"

/**
 * handle_command - Handles the execution of a command.
 * @command: The command to execute.
 * @arguments: The args for the command.
 * Author: Amira.
 */

void handle_command(char *command, char *arguments[MAX_ARGUMENTS])
{
	/* Check if the command starts with '/' */
	if (command[0] == '/')
	{
		/* Absolute path command, execute directly */
		execute_command_with_args(command, arguments);
	}
	else
	{
		/* Resolve the command path */
		char *resolved_path = resolve_command_path(command);

		if (resolved_path != NULL)
		{
			/* Execute the command with resolved path */
			execute_command_with_args(resolved_path, arguments);
		}
		else
		{
			/* Command not found */
			printf("Command not found: %s\n", command);
		}
	}
}