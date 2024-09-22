#include "lists.h"
#include <stdlib.h>

/**
  * *add_dnodeint_end - add a node to the end of the list
  * @head: head of the list
  * @n: value to add to the l
  * Return: pointer to the element added
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
dlistint_t *temp = *head;
if (new_node == NULL)

return (NULL);


new_node->n = n;
new_node->next = NULL;


if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
new_node->prev = temp;
return (new_node);
}
