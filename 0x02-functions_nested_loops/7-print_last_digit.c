#include "main.h"

/**
 * print_last_digit - print the last digit of num
 * @n: number that will take and return its last digit
 *
 * Return: returns the last value of the digit
 */
int print_last_digit(int n)
{
	int last_digit;
	last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
