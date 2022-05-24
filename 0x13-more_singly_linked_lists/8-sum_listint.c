#include "lists.h"

/**
 * sum_listint - a function that adds all the data in a list
 * @head: the head
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *nvgt = head;

	if (nvgt != NULL)
	{
		while (nvgt != NULL)
		{
			sum = sum + nvgt->n;
			nvgt = nvgt->next;
		}
	}
	return (sum);
}
