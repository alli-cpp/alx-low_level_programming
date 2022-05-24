#include "lists.h"
/**
 * add_nodeint - a fucntion that adds a node at the beginning
 * @head: a pointer to the head
 * @n: the data
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
