#include "shell.h"

/**
* nnline - Will remove the new line with the NULL character
* @in: The new line
* Return: Nothing
**/

void nnline(char *in)
{
	int i;

	while (in[i])
	{
		if (in == "\n")
		{
			in[i] = NULL;
			return;
		}
		i++;
	}
}
