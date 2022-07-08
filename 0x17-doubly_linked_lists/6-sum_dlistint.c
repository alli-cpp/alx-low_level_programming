#include "lists.h"

/**
 * sum_dlistint -  a function that sums all the data in a list
 * @head: the head of the function
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
