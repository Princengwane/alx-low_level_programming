#include "main.h"

/**
 * print_to_98 - print n  to 98 counts in order
 *               separated by comma, followed by space
 *
 * @n: number to begin counting at
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d, ", count);
	printf("98\n");
}