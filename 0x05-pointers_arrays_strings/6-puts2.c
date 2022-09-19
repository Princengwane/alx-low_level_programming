#include "main.h"

/**
 * puts2 - funct that prints every other char of a string
 * @str: string to print
 * Return: void 
 */
void puts2(char *str)
{
	 int i, j;
	 char c;

	 c = *str;
	 i = 0;
	 while (c)
	{
		i++;
		c = *(str + i);
	}
	 j = 0;
	 i--;

	 while (j <= i)
	{
		_putchar(*(str + j));
		j += 2;
	}
	 _putchar('\n');
}
