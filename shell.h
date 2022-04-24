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

/* Measures the lenght of a string */
int _strlen(char *s);

/* Concatenates 2 strings */
char *_strcat(char *dest, char *src);

/* Prints the path with a string */
char *path_printer(char *dir, char *first);

/* Prints the enviroment variable */
int env_printer(char **env, int *ex_sts);

/* Print a special number */
void int_printer(int *atte);

#endif
