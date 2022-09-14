#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: value to be multiplied
 */
void print_times_table(int n)
{
	int m, result;

	for (n = 0; n <= 15; n++)
	{
		putchar('0');
		for (m = 1; m <= 15; m++)
		{
			putchar(',');
			putchar(' ');

			result = n * m;
			if (result <= 15)
				putchar(' ');
			else
				putchar((result / 10) + '0');
			putchar((result % 10) + '0');
		}
		putchar('\n');
	}
}
