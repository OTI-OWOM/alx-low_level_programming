#include <stdio.h>
/**
 * main - Write a program that prints all possible combinations of two
 * two-digit numbers.
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
int num0, num1, num2, num3;
for (num0 = 48; num0 <= 57; num0++)
{
for (num1 = 48; num1 <= 57; num1++)
{
for (num2 = 48; num2 <= 57; num2++)

{
for (num3 = 48; num3 <= 57; num3++)
{
if (((num2 + num3) > (num0 + num1) && num2 >= num0) || num0 < num2)
{

putchar(num0);
putchar(num1);
putchar(' ');
putchar(num2);
putchar(num3);
if (num0 + num1 + num2 + num3 == 227 && num0 ==57)

{

break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
