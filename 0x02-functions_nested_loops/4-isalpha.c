#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that checks for alphabetic characters
 * @c: char type letter
 * Return: return 0 on success and 1 on fail
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
