#ifndef SHELL_H
#define SHELL_H

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
int _eof(char *buff, ssize_t reed, int *_exitst);

/* Measures the lenght of a string */
int _strlen(char *s);

/* Concatenates 2 strings */
char *_strcat(char *dest, char *src);

/* Duplicates a string*/
char *_strdup(char *str);

/* Prints the path with a string */
char *path_printer(char *dir, char *first);

/* Prints the enviroment variable */
int env_printer(char **env, int *ex_sts);

/* Print a special number */
void int_printer(int *atte);

/*Will parse/separate text of a string into tokens*/
char **parse_text(char *parsin);

/* Exit builtin */
void _builexit(char *in, char **pasedin, int *_exitst);

/*prints the environment */
int printenv(char **env, int *_exitst);

#endif
