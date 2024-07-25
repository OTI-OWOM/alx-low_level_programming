#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - adds two integers
 *@a: first parameter
 *@b: second parameter
 *Return: return sum
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - subtracts two 
 *@a: first parameter
 *@b: second parameter
 *
 *Return: return sub 
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - multiplies two integers
 *@a: first parameter
 *@b: second parameter
 *
 *Return: return mul 
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - divides two integers
 *@a: first parameter
 *@b: first parameter
 *
 *Return: return div
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return(a / b);
}

/**
 *op_mod - modulo of two integers
 *@a: first parameter
 *@b: second parameter
 *
 *Return: return mod
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

