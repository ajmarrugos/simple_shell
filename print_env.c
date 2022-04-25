#include "shell.h"


int printenv(char **env, int *_exitst)
{
    unsigned int n = 0;

	while (env[n] != NULL)
	{
		print_str(env[n]);
		ponchar('\n');
		n++;
	}
	*_exitst = 0;
	return (EXIT_SUCCESS);
}