#include "shell.h"

/**
* ponchar - Will write the char c to stdout
* @c: The character to print
* Return: On success 1. On error, -1 is returned
**/

int ponchar(char c)
{
return (write(1, &c, 1));
}
