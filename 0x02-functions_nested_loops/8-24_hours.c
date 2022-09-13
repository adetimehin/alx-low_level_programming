#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;
	int rem_hours;
	int rem_mins;

	while (hours <= 23)
	{
		while (mins <= 59)
		{
			rem_mins = mins % 10;
			rem_hours = hours % 10;
			_putchar((hours / 10) + '0');
			_putchar(rem_hours + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar(rem_mins + '0');
			mins++;
			_putchar('\n');
		}
		hours++;
		mins = 0;
	}
}
