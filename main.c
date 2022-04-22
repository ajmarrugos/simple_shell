#include "shell.h"

int main(int argc, char *argv[], char *envp[] )
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read = 0;
	(void)argc, (void)**argv;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "SHELL$ ", 7);

		read = getline(&input, &len, stdin);

		nnline(input);

	}
}