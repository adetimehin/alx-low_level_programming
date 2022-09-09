#include <stdio.h>

/**
 * main - prints alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	int a = 122;

	while (a > 96)
		putchar(a--);
	putchar(10);
	return (0);
}
