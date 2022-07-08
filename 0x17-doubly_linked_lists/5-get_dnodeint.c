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
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: a pointer to the head
 * @index: the index of the node
 * Return: a pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	if (head == NULL || len(head) < index)
		return (NULL);
	while (index > 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
