#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node
 * @head: head
 * @idx: index to be inserted
 * @n: num
 * Return: NULL if failedffa
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *x;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
			h = h->next;
	}

	if (h == NULL && idx != 0)
		return (NULL);

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;

	if (idx == 0)
	{
		x->next = *head;
		*head = x;
	}
	else
	{
		x->next = h->next;
		h->next = x;
	}
	return (x);
}
