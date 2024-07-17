#include <stdlib.h>
#include "main.h"

/**
 *_strdup - rrturns a pointer to a new string which is a duplicate of
 *of the string str.
 *@str: string to duplicate
 *
 *Return: Pointer to 'a' the new duped string
 */

char *_strdup(char *str)
{
char *a;
int i, c;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;
a = malloc(i * sizeof(*a) + 1);

if (a == NULL)
return (NULL);

for (c = 0; c < i; c++)
a[c] = str[i];
a[c] = '\0';
return (a);
}
