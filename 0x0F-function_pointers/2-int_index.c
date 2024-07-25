#include "function_pointers.h"

/**
 *int_index - a function that searches for an integer
 *@size: the number of elements in the array
 *@cmp: pointer to the function to be used
 *@array: array of values
 *
 *Return: return -1 if no element matches and if size is less
 *or equal 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
}
return (-1);
}
