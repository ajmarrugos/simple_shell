#include "shell.h"

/**
 * str_printer - Will print a string
 * @s: The string to be printed
 * Return: Void
 **/

void str_printer(char *s)
{
int i, bytes, wc;
for (i = 0; s[i] != '\0'; i++)
;
bytes = i;
wc = write(STDOUT_FILENO, s, bytes);
if (wc == EOF)
return;
}
