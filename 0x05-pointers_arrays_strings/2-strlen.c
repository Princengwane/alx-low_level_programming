#include "main.h"

/**
 * _strlen - funct that return the len of a string
 * @s: the string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
		i++;

	return (i);
}

