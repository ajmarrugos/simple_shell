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

/* Prints a string */
void str_printer(char *s);

#endif
