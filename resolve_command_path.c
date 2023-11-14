#include "main.h"

/**
 * resolve_command_path - Resolves the full path of a command.
 * @command: The command to resolve.
 * Author: Amira.
 * Return: A pointer to the full path of the command if found, or NULL.
 */

char *resolve_command_path(char *command)
{
	static char full_path[256];
	struct stat statbuf;
	char *path;
	char *path_copy;
	char *dir;

	path = getenv("PATH");
	if (path == NULL)
	{
		return (NULL);
	}

	path_copy = _strdup(path);
	if (path_copy == NULL)
	{
		return (NULL);
	}

	dir = strtok(path_copy, ":");
	while (dir != NULL)
	{
		/* Clear the full_path buffer */
		full_path[0] = '\0';
		/* Concatenate the directory and the command */
		_strcpy(full_path, dir);
		_strcat(full_path, "/");
		_strcat(full_path, command);

		if (stat(full_path, &statbuf) == 0)
		{
			free(path_copy);
			return (full_path);
		}

		dir = strtok(NULL, ":");
	}

	free(path_copy);
	return (NULL);
}
