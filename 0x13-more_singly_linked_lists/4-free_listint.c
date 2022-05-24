#include "lists.h"

/**
 * free_listint - a fucntion that frees a list
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
