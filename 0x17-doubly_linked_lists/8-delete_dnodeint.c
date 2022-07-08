#include "lists.h"

/**
 * len -  a function that returns the maximum index in a list
 * @head: a pointer to the head
 * Return: the maximum index
 */
unsigned int len(dlistint_t *head)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (temp->next != NULL && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

/**
 * delete_dnodeint_at_index - a function that deletes a node
 * @head: the head of the list
 * @index: the index to be deleted
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL || len(*head) < index)
		return (-1);
	while (index > 0)
	{
		temp = temp->next;
		index--;
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
		if (temp->prev == NULL)
			*head = temp->next;
	}
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->prev == NULL && temp->next == NULL)
		*head = NULL;
	free(temp);
	temp = NULL;
	return (1);
}
