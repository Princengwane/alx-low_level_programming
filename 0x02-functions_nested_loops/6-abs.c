#include "main.h"
#include <stdio.h>

/**
 * Description: _abs -function that computes the absolute value of an integer
 * @n: takes integer type input for the arg of the function
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
	return (n);
	}
	else
	return (n * -1);
}
