/* 101-quote.c : Quote */
#include <stdio.h>

/**
 * main - prints quote to stderr
 *
 * Return: 1
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", text);
	return (1);
}
