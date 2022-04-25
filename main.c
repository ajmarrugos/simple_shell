#include "shell.h"

/**
* main - Main input for the program
* @argc: Number of arguments
* @argv: Arguments recieved
* @env: Enviroment variable
* Return: 0 on success
**/

int main(int argc, char **argv, char **env)
{
char *input = NULL;
char **args = NULL;
int i = 0, status = 0, arg_n = 0;
size_t len = 0;
ssize_t read = 0;
static int _exit, atte;
(void)argc, (void)**argv;

while (1)
{
if (isatty(STDIN_FILENO) == 1)
write(STDOUT_FILENO, "SHELL$ ", 7);

read = getline(&input, &len, stdin);
++atte;
if (super_char(input, read, &_exit) == 127)
continue;

nnline(input);

args = parsero(input);

for (i = 0; args[i]; i++)
arg_n++;

status = _path(args[0], args, env, &_exit);

_xcute(status, args, &_exit, &atte);

fflush(stdin);
}
free(input);
return (0);
}
