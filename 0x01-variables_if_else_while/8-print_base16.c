#include <stdio.h>
/**
 * main -  a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 *Return: Always return 0 (Sucess)
 */
int main(void)
{
char letter;

for (letter = '0'; letter <= '9'; letter++)

{
putchar(letter);

}

for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);

}
