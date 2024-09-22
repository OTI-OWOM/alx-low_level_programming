#include "lists.h"
#include <stdlib.h>

/**
  * sum_dlistint - sums all nodes in a linked list
  * @head: head of the list
  * Return: the sum of the nodes
  */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
