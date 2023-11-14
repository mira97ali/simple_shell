#include "main.h"

/**
 * execute_command - Execute a command using fork and execve.
 * @command: The command to be executed.
 * Author: Amira Benamara
 */

void execute_command(char *command)
{
	char *argv[2];
	pid_t pid;

	argv[0] = command;
	argv[1] = NULL;


	pid = fork();
	if (pid == -1)
	{
		perror("fork");
	} else if (pid == 0)
	{
		char *envp[1];

		if (_strchr(command, ' ') != NULL)
		{
			/* Command has arguments, pass a non-existent command to execve */
			argv[0] = NULL;
			if (execve("/nonexistentcommand", argv, envp) == -1)
			{
				perror("execve");
			}
		} else
		{
			/* Command without arguments, execute normally */
			envp[0] = NULL;
			if (execve(command, argv, envp) == -1)
			{
				perror("execve");
			}
		}
		_exit(EXIT_FAILURE); /* If execve fails */
	} else
	{
		wait(NULL); /* Wait for the child process to finish */
	}
}
