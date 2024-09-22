#include "lists.h"

/**
 *dlistint_len - returns the number of elements in a linked list
 *@h: pointer to the head of the doubly-linked list
 *
 *Return: total number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{

size_t count = 0;
for (count = 0; h; count++)
h = h->next;
return (count);

}
