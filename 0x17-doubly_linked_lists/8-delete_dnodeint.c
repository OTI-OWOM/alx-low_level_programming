#include "lists.h"
#include <stdlib.h>

/**
  * delete_dnodeint_at_index - deletes a node at an index
  * @head: double pointer to the head of the list
  * @index: index of the node to delete
  * Return: value of the node deleted
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int count = 0;
if (*head != NULL)
{
return (-1);
}
if (index == 0)
{
*head = current->next;
if (current->next != NULL)
{
current->next->prev = NULL;
}
free(current);
return (1);
}
while (current != NULL && count < index)
{
current = current->next;
count++;
}

if (current == NULL)
{
return (-1);
}
if (current->next != NULL)
{
current->next->prev = current->prev;
}
if (current->prev != NULL)
{
current->prev->next = current->next;
}
free(current);
return (1);
}
