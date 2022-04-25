#include "shell.h"

/**
* super_char - if the user types Ctrl+d, it exits the shell and handles
* errors when the user keeps on tabbing, it carries out the command
* @bytes: Number of bytes read in from the user input
* @buffer: Buffer that handles the op
* @ex_st: Exit status
* Return: Always (0) for succcess
**/

int super_char(char *buffer, ssize_t bytes, int *ex_st)
{
int i = 0;

if (bytes == EOF && isatty(STDIN_FILENO) == 1)
{
ponchar('\n');
free(buffer);
exit(*ex_st);
}

if (bytes == EOF && isatty(STDIN_FILENO) == 0)
{
free(buffer);
exit(*ex_st);
}

if (_strcmp(buffer, "\n") == 0)
{
*ex_st = 0;
return (127);
}

while (buffer[i] != '\n')
{
if (buffer[i] != ' ' && buffer[i] != '\t')
return (0);

++i;
}
*ex_st = 0;
return (127);
}
