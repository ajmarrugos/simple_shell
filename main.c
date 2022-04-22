#include "shell.h"

/**
* main - Main input for the program
* @argc: Number of arguments
* @argv: Arguments recieved
* @envp: Enviroment variable
* Return: 0 on success
**/

int main(int argc, char *argv[], char *envp[])
{
(void)argc;
(void)argv;
shell(argv, envp);
return (0);
}
