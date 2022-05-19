#include "lists.h"

/**
 * free_list - a function that frees memory
 * @head: the head of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
