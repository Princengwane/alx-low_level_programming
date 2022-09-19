#include "main.h"

/**
 * rev - funct that reverse swap 2 char
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */
void rev(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * rev_string - funct that reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i--;
	j = 0;
	while (i > j)
	{
		rev(s + i, s + j);
		j++;
		i--;
	}
}
