#include "main.h"
/**
 * string_toupper - lowercase letters of string to upper
 * @c: this the input string
 *
 *
 * Return: c
 */

char *string_toupper(char *c)

{
int index;
int letter = 'a' - 'A';

for (index = 0; c[index] != '\0'; ++index)
{
if (c[index] >= 'a' && c[index] <= 'z')
{
c[index] = c[index] - letter;
}
}
return (c);

}
