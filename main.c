#include "shell.h"

/**
* main - Main input for the program
* @argc: Number of arguments
* @argv: Arguments recieved
* @env: eviroment
* Return: 0 on success
**/

int main(int argc, char **argv, char **env)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read = 0;
	static int _exit, atte;
	char **pasedin = NULL;
	int n = 0, m = 0, status = 0;
	(void)argc, (void)**argv;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "SHELL$ ", 7);

		read = getline(&input, &len, stdin);
		atte++;
		if (_eof(input, read, &_exit) == 127)
			continue;

		nnline(input);

		pasedin = parse_text(input);

		_builexit(*input, **pasedin, &_exit);

		if(_strcmp(pasedin[0], "env") == 0)
		{
			printenv(env, exit);
		}
		

		fflush(stdin);
	}
	free(input);
	return (0);
}
