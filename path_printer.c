#include "shell.h"

/**
 * path_printer - Function that prints the path with a string
 * @dir: String after "PATH ="
 * @first: First tokenized word
 * Return: 0 for success
 **/

char *path_printer(char *dir, char *first)
{
	char *new = NULL;
	char *token = NULL;
	int token_len = 0, first_len = 0;
	token = dir;
	token_len = _strlen(token);
	first_len = _strlen(first);
	new = malloc((token_len + first_len + 2) * sizeof(char));
	if (new == NULL)
		return (NULL);
	new[0] = '\0';
	_strcat(new, dir);
	_strcat(new, "/");
	_strcat(new, first);
	_strcat(new, "\0");
	return (new);
}
