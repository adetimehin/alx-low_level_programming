#include <stdio.h>

/**
 * main - prints numbers with commas
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 57; a++)
	{
		putchar(a);
		putchar(44);
		putchar(32);
	}
	putchar(57);
	return (0);
}
