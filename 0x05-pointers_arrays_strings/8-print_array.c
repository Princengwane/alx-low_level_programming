#include "main.h"
#include <stdio.h>

/**
 * print_array - funct that prints n element
 * @a: array that will be printed
 * @n: number of elementd
 * Return: 0
 */

void print_array(int *a, int n)
{
	 int i;

	 if (n <= 0)
	{
		printf("\n");
		return;
	}
	 for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
