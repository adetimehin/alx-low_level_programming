#include <stdio.h>

/**
 * main - prints two digit number combinations
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	b = a;
	do {
		for (a = 48; a < 58 && a < b; a++)
		{
			putchar(a);
			putchar(b);
			if (a == 56 && b == 57)
				break;
			putchar(44);
			putchar(32);
		}
	} while (!(a == b));
	putchar(10);
	return (0);
}
