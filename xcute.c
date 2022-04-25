#include "shell.h"

/**
* _xcute - Will execute processess in the main shell
* @status: Status of the path, whether the file found is executable or not
* @args: Parsed arguments
* @ex_st: Exit status
* @cnt: Count of commands or attempted commands that were run
* Return: void
**/

void _xcute(int status, char **args, int *ex_st, int *cnt)
{
if (status == 2)
{
if (access(args[0], X_OK) == 0)
{
if (fork() == 0)
execve(args[0], args, NULL);

else
wait(NULL);
*ex_st = 0;
}

else if (access(args[0], F_OK) != 0)
{
str_printer("sh: ");
int_printer(cnt);
str_printer(": ");
perror(args[0]);
*ex_st = 127;
}

else if (access(args[0], F_OK) == 0 &&
access(args[0], X_OK) != 0)
{
str_printer("sh: ");
int_printer(cnt);
str_printer(": ");
perror(args[0]);
*ex_st = 126;
}
}
free(args);
}
