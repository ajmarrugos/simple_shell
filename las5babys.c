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
 */
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
 * _strdup - copy the string given as a parameter
 * @str: string
 * Return: du
 */
char *_strdup(char *str)
{
	int i, j;
	char *du;

	if (str == 0)
		return (0);

	j = 0;
	while (str[j] != 00)
		j++;

	du = malloc(j * sizeof(*str) + 1);

	if (du == 0)
		return (0);

	for (i = 0; i <= j; i++)
		du[i] = str[i];

	du[i] = 00;
	return (du);
}
