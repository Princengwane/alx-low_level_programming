#include "main.h"

/**
 * _puts - funct that prints a string followed by a new line
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int i;
	char c;

	c = *str;
	i = 0;
	while (c)
	{
		_putchar(c);
		i++;
		c = *(str +1);
	}
	_putchar('\n');
}
