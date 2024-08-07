#include "main.h"

/**
 *_strpbrk - the _strpbrk()function locates the first
 *occurence in the string s of any of the bytes
 *in the string accept
 *
 *@s: string where search is made
 *@accept: strings where search bytes are located
 *
 *
 * Return: Returns a pointer to the byte is s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}
return ('\0');
}
