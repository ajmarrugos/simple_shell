#include "shell.h"

/**
* nnline - Will remove the new line with the NULL character
* @n: The new line
* Return: Nothing
**/

void nnline(char *in)
{
	int n;

	while (in[n])
	{
		if (in == "\n")
		{
			in[n] = NULL;
			return;
		}
		n++;
	}
}
