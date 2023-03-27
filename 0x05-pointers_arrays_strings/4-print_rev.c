#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @str: string
 */

void print_rev(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (i -= 1; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}

