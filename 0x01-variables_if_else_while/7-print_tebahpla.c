#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse,
 *followed by a new line
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);

putchar('\n');
return (0);
}
