#include "main.h"
#include <stdio.h>

/**
 * prints_most_numbers - Print numbers between 0 to 0 incl.
 *
 * Return: Void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
		{
			continue;
		}
		putchar(i);
	}
	putchar(10);
}
