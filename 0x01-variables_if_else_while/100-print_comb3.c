#include <stdio.h>
/**
 * main - Write a program that prints all possible different 
 *combinations of two digits.
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{

int num, num1;
for (num = '0'; num <= '9'; num++)
{
for (num1 = '0'; num1 <= '9'; num1++)
{

if (num < num1)
{

putchar(num);
putchar(num1);


if (num != '8' || (num == '8' && num1 != '9'))
{

putchar(',');
putchar (' ');
}

}
}

}
  

putchar ('\n');
return (0);

}
