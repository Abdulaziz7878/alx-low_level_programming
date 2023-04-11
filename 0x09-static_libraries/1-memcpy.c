#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @dest: pointer to destination memory area
 * @src: pointers to source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

