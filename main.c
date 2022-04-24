#include "shell.h"

/**
* main - Main input for the program
* @argc: Number of arguments
* @argv: Arguments recieved
* @envp: Enviroment variable
* Return: 0 on success
**/

int main(int argc, char **argv)
{
char *input = NULL;
(void)argc, (void)**argv;
while (1)
{
if (isatty(STDIN_FILENO) == 1)
write(STDOUT_FILENO, "SHELL$ ", 7);
nnline(input);
}
}
