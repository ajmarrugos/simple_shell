#include "shell.h"

/**
* nnline - Will remove the new line with the NULL character
* @in: The new line
* Return: Nothing
**/

void nnline(char *in)
{
int i = 0;
while (in[i])
{
if (in[i] == '\n')
{
in[i] = '\0';
return;
}
i++;
}
}
