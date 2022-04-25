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
