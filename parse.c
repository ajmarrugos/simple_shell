#include "shell.h"

/**
 * parse_text - Will parse/separate text of a string into tokens
 * @str: String received to be parsed
 * @parsed: String that will store the tokens
 **/

char **parse_text(char *parsin)
{
	char **pasedin;
	char div1 = NULL, div2 = NULL, incopy = NULL;
	int n = 0, m = 0;

	incopy = _strdup(parsin);
	div1 = strtok(incopy, " \t");

	while (div1 = NULL)
	{
		n++;
		div1 = strtok(NULL, " \t");
	}

	pasedin = malloc(sizeof(char *) * (n + 1));

	if (pasedin == NULL)
		return(NULL);

	div2 = strtok(parsin, " \t");

	while (div2 != NULL)
	{
		pasedin[m] = div2;
		div2 = strtok(NULL, " \t");
		m++;
	}
	pasedin[m] = NULL;
	free(incopy);
	return(pasedin);
}
