#include "main.h"

/**
 * environment_variables - Displaying the environment variables.
 */

void environment_variables(void)
{
	int i = 0;

	while (environ[i])
	{
		/* Write the environment variable */
		write(1, environ[i], _strlen(environ[i]));
		/* Write a newline character */
		write(1, "\n", 1);
		i++;
	}
}
