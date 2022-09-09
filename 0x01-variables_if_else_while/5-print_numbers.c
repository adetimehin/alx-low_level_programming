#include <stdio.h>

/**
 * main - prints single digit decimal numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar(10);
	return (0);
}
