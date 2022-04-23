#include "shell.h"

/**
* main - Main input for the program
* @argc: Number of arguments
* @argv: Arguments recieved
* @envp: Enviroment variable
* Return: 0 on success
**/

int main(int argc, char *argv[], char *envp[] )
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read = 0;
	static int _exit, atte;
	(void)argc, (void)**argv;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "SHELL$ ", 7);

		read = getline(&input, &len, stdin);

		nnline(input);

		fflush(stdin);

	}
	free(input);
	return(0);
}
