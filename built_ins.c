#include "shell.h"

/**
* builtins - Helps to implement exit and printenv builtins
* @input: Input buffer
* @args: Parsed arguments
* @env: Evironment
* @ex_st: Exit status
* Return: void
**/

void builtins(char *input, char **args, char **env, int *ex_st)
{

if (_strcmp(args[0], "exit") == 0)
{
free(args);
free(input);
exit(*ex_st);
}

if (_strcmp(args[0], "env") == 0)
env_printer(env, ex_st);
}
