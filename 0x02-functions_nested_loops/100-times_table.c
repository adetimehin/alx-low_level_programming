#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: value to be multiplied
 */
void print_times_table(int n)
{
	int m, result;

	for (n = 0; n <= 15; n++)
	{
		_putchar('0');
		for (m = 1; m <= 15; m++)
		{
			_putchar(',');
			_putchar(' ');

			result = n * m;
			if (result <= 15)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
