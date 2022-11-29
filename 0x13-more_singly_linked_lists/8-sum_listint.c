#include "lists.h"

/**
 * sum_listint - returns the sum of all passed data
 * @head: head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
