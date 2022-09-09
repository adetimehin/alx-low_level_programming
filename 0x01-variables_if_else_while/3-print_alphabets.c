#include <stdio.h>

/**
 * main - prints lowercase & uppercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = 97;
	b = 65;
	while (a < 123)
		putchar(a++);
	while (b < 91)
		putchar(b++);
	putchar(10);
	return (0);
}
