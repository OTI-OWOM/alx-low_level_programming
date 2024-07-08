#include <stdlib.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: the character we are looking for
 * @s: the string to check
 *
 * Return: a pointer to the first occurence of the character @c in the string
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
