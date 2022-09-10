#include <stdio.h>

/**
 * main - prints two double digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		putchar(a);
		putchar(32);
		putchar(a);
		putchar(a++);
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
