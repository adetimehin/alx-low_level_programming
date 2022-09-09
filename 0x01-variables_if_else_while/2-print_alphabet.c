#include <stdio.h>

/**
 * main - prints lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	int a = 97;

	while (a < 123)
		putchar(a++);
	putchar(10);
	return (0);
}
