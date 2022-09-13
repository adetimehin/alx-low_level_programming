#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: int for the argument
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
