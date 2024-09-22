#include "lists.h"
#include <stdlib.h>
/**
 * *get_dnodeint_at_index - gets the node at an index
 * @head: head of the list
 * @index: index to get
 * Return: pointer to the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head != NULL)
{

if (count == index)
{
return (head);
}
head = head->next;
count++;
}

return (NULL);
}
