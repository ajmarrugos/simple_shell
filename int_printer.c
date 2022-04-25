#include "shell.h"

/**
 * int_printer - Prints an integer
 * @atte: Pointer to the number
 * Return: void
 **/

void int_printer(int *atte)
{
	int x = 0, y = 0, i, z;
	unsigned int base = 1, dist, max;
	z = *atte;
	max = z;
	dist = max;
	do
	{
		dist /= 10;
		++y;
	} while (dist != 0);
	x += y;
	for (i = 0; i < y - 1; i++)
		base = base * 10;
	ponchar('0' + (max / base));
	if (y > 1)
	{
		for (i = 0; i < y - 2; i++)
		{
			base /= 10;
			dist = max / base;
			ponchar('0' + dist % 10);
		}
		ponchar('0' + (max % 10));
	}
}
