#include <stdio.h>

/**
 * main - prints lowercase alphabets minus q & e
 *
 * Return: 0
 */
int main(void)
{
	int a;

	while (!(a == 101 && a == 103))
	{
		for (a = 97; a < 123; a++)
			putchar(a);
	}
	putchar(10);
	return (0);
}
