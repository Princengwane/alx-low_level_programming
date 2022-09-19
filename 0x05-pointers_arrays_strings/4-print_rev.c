#include "main.h"

/**
 * print_rev - funct that print a str in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;
	char c;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	c = *(s + i - 1);
	j = 1;
	while (c)
	{
		_putchar(c)
		j++;
		c = *(s + i - j);
	}
	_putchar('\n');
}

