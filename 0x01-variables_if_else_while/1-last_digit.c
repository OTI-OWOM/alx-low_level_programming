#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a text according number
 *
 *Return: Always (Sucess)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

lastd = n % 10;


if (lastdigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
}
else if(lastd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastd);
}
else if (lastd < 6 && != 0)
{
printf("Last digit of %d is less than 6 and is not 0\n");
}

return (0);
}