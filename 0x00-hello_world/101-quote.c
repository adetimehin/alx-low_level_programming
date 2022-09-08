/* 101-quote.c : Quote */
#include <stdio.h>

/**
 * main - prints quote to stderr
 *
 * Return: 1
 */
int main(void)
{
	char text;

	text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fprintf(stderr, "%c\n", text);
	return (1);
}
