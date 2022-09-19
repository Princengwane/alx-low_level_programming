#include "main.h"

/**
 * puts_half - funct that prints a string followed by a line
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;
	char c;

	c = *str;
	i = 0;
	while (c)
	{
		i++;
		c = *(str + 1);
	}
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
