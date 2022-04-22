#include "shell.h"

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