#include "shell.h"
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