#include <stdlib.h>
#include "main.h"

/**
 *_strdup - rrturns a pointer to a new string which is a duplicate of
 *of the string str.
 *@str: string to duplicate
 *
 *Return: Pointer to the copied string (SUCESS), NULL (Error)
 */

char *_strdup(char *str)
{
char *a;
unsigned int i, c;

i = 0;
c = 0;


if (str == NULL)
return (NULL);

while (str[i])
i++;

a = malloc(sizeof(*a) * (i + 1));

if (a == NULL)
return (NULL);

while ((a[c] = str[i]) != '\0')
c++;
return (a);
}
