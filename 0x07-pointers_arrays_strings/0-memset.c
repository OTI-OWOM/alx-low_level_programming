#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @n: number of bytes to fill
 * @s: pointer to memory area to fill
 * @b: the constant byte
 *
 * Return: return a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return s;
}
