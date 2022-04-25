#include "shell.h"

/**
 * env_printer - Prints the environment variable
 * @env: The environment variable to print
 * @ex_sts: Exit status
 * Return: Always (0) in success
 **/

int env_printer(char **env, int *ex_sts)
{
	unsigned int i = 0;
	while (env[i] != NULL)
	{
		str_printer(env[i]);
		ponchar('\n');
		i++;
	}
	*ex_sts = 0;
	return (EXIT_SUCCESS);
}
