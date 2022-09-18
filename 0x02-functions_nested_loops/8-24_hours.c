#include "main.h"

/**
 * jack_bauer -funct that prints every minutes of the day
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hrs_rem;
	int min_rem;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	min_rem = minutes % 10;
	hrs_rem = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hrs_rem + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(min_rem + '0');

	minutes++;

	_putchar('\n');
	}

	hours++;

	minutes = 0;
	}
}
