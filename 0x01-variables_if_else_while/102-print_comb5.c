#include <stdio.h>

/**
 * main - prints two double digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = a; c <= '9'; c++)
			{
				for (d = b + 1; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (!((a == 57 && b == 56) && (c == 57 && d == 57)))
					{
						putchar(44);
						putchar(32);
					}
				}
				d = '0';
			}
		}
	}
	putchar(10);
	return (0);
}
