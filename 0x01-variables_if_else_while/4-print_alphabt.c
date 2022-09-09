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
		putchar(a);
		if (a == 101)
			;
		if (a == 113)
			;
	}
	putchar(10);
	return (0);
}
