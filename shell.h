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

#endif
