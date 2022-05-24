#include "lists.h"

/**
 * reverse_listint - a function that reverses lists
 * @head: the head of the list
 * Return: the pointer to the head node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nvgt2 = (*head)->next, *temp = NULL;

	if (*head == NULL || head == NULL)
		return (temp);
	(*head)->next = NULL;
	while (nvgt2 != NULL)
	{
		temp = nvgt2;
		nvgt2 = nvgt2->next;
		temp->next = *head;
		*head = temp;
	}
	temp = NULL;
	nvgt2 = NULL;
	return (*head);
}
