#include "lists.h"

/**
 * pop_listint - a function that deletes the head node and returns the data
 * @head: a pointer to the head pointer
 * Return: the data in the head node
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head != NULL)
	{
		data = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (data);
	}
	return (0);
}
