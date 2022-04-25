#include "shell.h"

/**
* _strlen - Counts the length of a string
* @s: string
* Return: Returns length of string
**/

int _strlen(char *s)
{
int l = 0;
while (s[l] != '\0')
l++;
return (l);
}

/**
* _strcat - Concatenates two strings
* @dest: The destiny string
* @src: The source string
* Return: A concatenated string with overwritten null byte
**/

char *_strcat(char *dest, char *src)
{
int len = _strlen(dest);
int i;
for (i = 0; src[i] != '\0'; i++)
dest[len + i] = src[i];
dest[len + i] = '\0';
return (dest);
}

/**
* _strcmp - compare strings
* @s1: char pointer
* @s2: char pointer
* Return: negative, 0 or positiv
**/

int _strcmp(char *s1, char *s2)
{
int a;
for (a = 0; s1[a] != 00 || s2[a] != 00; a++)
{
if (s1[a] != s2[a])
return (s1[a] - s2[a]);
}
return (0);
}

/**
* _strcpy - Copy a string pointed to by src
* @src: Copy from
* @dest: Destiny to copy
* Return: String
**/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; i <= _strlen(src); i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}

/**
* _strdup - Duplicate a string
* @str: The string to duplicate
* Return: Duplicated string
**/

char *_strdup(char *str)
{
int x = 0, i = 1;
char *s;
if (str == NULL)
return (NULL);
while (str[i])
{
i++;
}
s = malloc((sizeof(char) * i) +1);
if (s == NULL)
return (NULL);
while (x < i)
{
s[x] = str[x];
x++;
}
s[x] = '\0';
return (s);
}
