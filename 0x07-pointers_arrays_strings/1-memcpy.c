#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: destination memory area
 * @n: bytes of the memory
 * @src: source memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

