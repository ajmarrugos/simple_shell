#include "shell.h"

/**
* _path - Prints the environment PATH
* @env: Environment
* @fst: The 1st tokenized keyword (user inputted argument)
* @inpt: Tokenized arguments
* @ex_st: Exit status
* Return: 0 on success
**/

int _path(char *fst, char **inpt, char **env, int *ex_st)
{
int i;
char *tmp, *left, *dir;
char *new = NULL, *envcopy = NULL;

for (i = 0; *env[i] != '\0'; i++)
{
envcopy = _strdup(env[i]);
left = strtok(envcopy, "= \t");
tmp = strtok(NULL, "= \t");

if (_strcmp(left, "PATH") == 0)
{
dir = strtok(tmp, ": \t");
while (dir)
{
new = str_path(dir, fst);

if (access(new, X_OK) == 0)
{
if (fork() == 0)
execve(new, inpt, NULL);

else
wait(NULL);
*ex_st = 0;
free(new);
free(envcopy);
return (0);
}
dir = strtok(NULL, ": \t");
free(new);
}
}
free(envcopy);
}
return (2);
}
