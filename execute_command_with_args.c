#include "main.h"

/**
 * execute_command_with_args - Executing a command with arguments.
 * @shell_name: The name of the shell.
 * @command: The command to execute.
 * @arguments: The arguments for the command.
 * Author: Amira.
 */

void execute_command_with_args(
	char *shell_name,
	char *command,
	char **arguments
)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror(shell_name);
	}
	else if (pid == 0)
	{
		if (execve(command, arguments, NULL) == -1)
		{
			perror(shell_name);
			_exit(EXIT_FAILURE); /* If execve fails */
		}
	}
	else
	{
		wait(NULL); /* Wait for the child process to finish */
	}
}
