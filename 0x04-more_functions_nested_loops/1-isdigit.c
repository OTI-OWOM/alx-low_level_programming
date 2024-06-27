#include "main.h"

/**
 * _isdigit - checks character is a digit
 *@x: The digit to be checked
 *
 * Return: 1 if x is digit or 0 otherwise 
 */

int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
