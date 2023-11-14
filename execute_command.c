#include "main.h"

/**
 * execute_command - Execute a command using fork and execve.
 * @shell_name: The name of the shell.
 * @command: The command to be executed.
 *
 * Author: Amira Benamara
 */

void execute_command(char *shell_name, char *command)
{
	char *argv[2];
	pid_t pid;

	argv[0] = command;
	argv[1] = NULL;


	pid = fork();
	if (pid == -1)
	{
		perror(shell_name);
	} else if (pid == 0)
	{

		/* Command without arguments, execute normally */
		if (execve(command, argv, environ) == -1)
		{
			perror(shell_name);
		}

		_exit(EXIT_FAILURE); /* If execve fails */
	} else
	{
		wait(NULL); /* Wait for the child process to finish */
	}
}
