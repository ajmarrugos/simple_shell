#include "shell.h"

/**
 * parse_text - Will parse/separate text of a string into tokens
 * @str: String received to be parsed
 * @parsed: String that will store the tokens
 **/

void parse_text(char *str, char **parsed)
{
	const char separator[] = " \n\"";
	char *dest = NULL;
	int i = 0;
	dest = strtok(str, separator);
	while (dest)
	{
		parsed[i] = dest;
		dest = strtok(NULL, separator);
		i++;
	}
	parsed[i] = NULL;
}
