#ifndef SHELL.H
#define SHELL.H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>

/* Removes new line */
void nnline(char *in);

/* Writes a char in stdout */
int ponchar(char c);

/* Prints a string */
void str_printer(char *s);

/*string comparrassion*/
int _strcmp(char *s1, char *s2);

/*End of file ctrl-d*/
int  _eof(char *buff, ssize_t reed, int *_exitst);

#endif
