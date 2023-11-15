#include "main.h"

/**
 * _getenv - Retrieve the value of an environment variable.
 * @name: Pointer to the name of the environment variable.
 * Author: Amira Benamara.
 * Return: The function returns a pointer to the value of the variable
 *         NULL if not found.
 */

char *_getenv(const char *name)
{
	size_t name_length;
	char **env;

	if (name == NULL || *name == '\0' || strchr(name, '=') != NULL)
	{
		return (NULL);
	}

	name_length = _strlen(name);

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, name, name_length) == 0 && (*env)[name_length] == '=')
		{
			return (&(*env)[name_length + 1]);
		}
	}

	return (NULL);
}
