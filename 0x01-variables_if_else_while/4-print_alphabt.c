#include <stdio.h>

/**
 * main - prints lowercase alphabets minus q & e
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a == 101 || a == 113)
			continue;
		putchar(a);
	}
	putchar(10);
	return (0);
}
