#include "main.h"
/**
 * _islower - shows 1 if the input is a lowercase or shows 0.
 *
 * @c: The character in asqii code.
 *
 * Return: 1 for lowercase. 0 for the rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

