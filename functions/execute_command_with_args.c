#include "../main.h"

/**
 * execute_command_with_args - Executing a command with arguments.
 * @command: The command to execute.
 * @arguments: The arguments for the command.
 * Author: Amira.
 */

void execute_command_with_args(char *command, char **arguments)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
	}
	else if (pid == 0)
	{
		if (execve(command, arguments, NULL) == -1)
		{
			perror("execve");
			_exit(EXIT_FAILURE); /* If execve fails */
		}
	}
	else
	{
		wait(NULL); /* Wait for the child process to finish */
	}
}
