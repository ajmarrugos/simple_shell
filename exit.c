#include "shell.h"

/**
 * _exit - will exit the shell en type the comand exit
 * @in: Buffer
 * @pasedin: the arguments
 * @_exitst: exit status
 */

void _builexit(char *in, char **pasedin, int *_exitst)
{
    if (_strcmp(pasedin[0], "exit") == 0)
	{
		free(pasedin);
		free(in);
		exit(*_exitst);
}