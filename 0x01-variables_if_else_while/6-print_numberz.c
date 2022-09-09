#include <stdio.h>

/**
 * main - prints decimal numbers with putchar
 *
 * Return: 0
 */
int main(void)
{
	int a;

	a = 48;
	while (a < 58)
		putchar(a++);
	putchar(10);
	return (0);
}
