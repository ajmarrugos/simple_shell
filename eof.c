#include "shell.h"

int  _eof(char *buff, ssize_t reed, int *_exitst)
{
	int n = 0;

	if (reed == EOF && isatty(STDIN_FILENO) == 0)
		{
			free(buff);
			exit(*_exitst);
		}

	if (reed == EOF && isatty(STDIN_FILENO) == 1)
		{
			ponchar('\n');
			free(buff);
			exit(*_exitst);
		}

	if (_strcmp(buff, "\n") == 0)
		{
			*_exitst = 0;
			return (127);
		}

	while (buff[n] != '\n')
	{
		if (buff[n] != ' ' && buff[n] != '\t')
			return (0);

		++n;
	}

	*_exitst = 0;
	return (127);
}