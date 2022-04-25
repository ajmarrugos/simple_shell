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

/* Compares 2 strings */
int _strcmp(char *s1, char *s2);


/* Measures the lenght of a string */
int _strlen(char *s);

/* Concatenates 2 strings */
char *_strcat(char *dest, char *src);

/* Copy a string pointed to src */
char *_strcpy(char *dest, char *src);

/* Duplicates a string */
char *_strdup(char *str);

/* End of file Ctrl-d */
int _eof(char *buff, ssize_t reed, int *_exitst);

/* Prints the enviroment variable */
int env_printer(char **env, int *ex_sts);

/* Print a special number */
void int_printer(int *atte);

/* Prints the path string */
char *str_path(char *dir, char *fst);

/* Prints the enviroment PATH */
int _path(char *fst, char **inpt, char **env, int *ex_st);

/* Executes process in the main shell */
void _xcute(int status, char **args, int *ex_st, int *cnt);

/* Handles special characters and errors at typing commands */
int super_char(char *buffer, ssize_t bytes, int *ex_st);

/* Helps to free a matrix of pointers */
void free_matrix(char **matrix, int height);
  
#endif
