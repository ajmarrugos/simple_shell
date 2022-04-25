#include "shell.h"

/**
* str_path - Function that prints the path string
* @dir: The directory string after "PATH ="
* @fst: First tokenized word
* Return: 0 for success
**/

char *str_path(char *dir, char *fst)
{
char *new = NULL;
char *tkn = NULL;
int tkn_len = 0, fst_len = 0;

tkn = dir;
tkn_len = _strlen(tkn);
fst_len = _strlen(fst);

new = malloc((tkn_len + fst_len + 2) * sizeof(char));
if (new == NULL)
return (NULL);

new[0] = '\0';
_strcat(new, dir);
_strcat(new, "/");
_strcat(new, fst);
_strcat(new, "\0");

return (new);
}
