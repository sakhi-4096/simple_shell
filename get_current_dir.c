#include "shell.h"

/**
 * get_current_directory - get current working directory
 * Return: current directory
 */
char *get_current_directory()
{
	char *cwd = (char *) malloc(PATH_MAX);

	if (cwd != NULL)
	{
		if (getcwd(cwd, PATH_MAX) != NULL)
			return (cwd);
		else
			free(cwd);
	}
	free(cwd);

	return (NULL);
}