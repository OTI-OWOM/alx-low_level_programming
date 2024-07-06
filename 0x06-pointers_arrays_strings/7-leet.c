#include "main.h"
/**
 * leet - encodes a string into 1337.
 *
 * @s: string to code
 * Return: the encoded string
 */

char *leet(char *s)
{
int a;
int b;
int c;

char l[] = "oOlLeEaAtT";
char e[] = "0011334477";

a = 0;
while (s[a] != '\0')
{
b = 0;
c = 0;
while (l[b] != '\0')
{
if (s[a] == l[b])
{
c = b;
s[a] = e[c];
}
b++;
}
a++;
}
return (s);
}
