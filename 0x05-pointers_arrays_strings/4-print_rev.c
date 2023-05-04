#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, lens;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	lens = i;

	for (j = lens - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
