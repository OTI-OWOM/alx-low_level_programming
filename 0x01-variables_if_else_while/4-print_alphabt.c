#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase except q and e
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);

}
