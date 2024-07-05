#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: input value
 * @dest: input value 2
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)

{
int k;
int n;

k = 0;
while (dest[k] != '\0')
{
k++;
}

n = 0;
while (src[n] != '\0')
{
dest[k] = src[n];
k++;
n++;
}
dest[k] = '\0';
return (dest);
}
