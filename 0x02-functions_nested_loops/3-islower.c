#include "main.h"

/**
 * Description: _islower -function to check for lowercase
 * @c: checks input of function
 * Return: returns 1 if 'c' is lowercase
 *     otherwise always return 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
