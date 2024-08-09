#include "lists.h"

/**
 *listint_len - the length of elements in a linked list
 *@h: head pointer
 *Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t len = 0;
while (h != NULL)
{
h = h->next;
len++;
}
return (len);
}
