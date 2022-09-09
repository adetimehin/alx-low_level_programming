#include <stdio.h>

/**
 * main - prints hexadecimal numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = 48;
	b = 97;
	while (a < 58)
		putchar(a++);
	while (b < 103)
		putchar(b++);
	putchar(10);
	return (0);
}
