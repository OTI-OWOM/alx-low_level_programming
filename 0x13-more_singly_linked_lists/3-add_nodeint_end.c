#include "lists.h"


/**
 *add_nodeint_end - adds a new node at the end of a listint_t
 *@head: head of double pointer
 *@n: int add the list
 *
 *Return: NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp;

if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
return (new);

}
