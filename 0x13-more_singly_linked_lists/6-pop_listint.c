#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to the head of the list
 *
 * Return: The deleted node data
 */
int pop_listint(listint_t **head)
{
	listint_t *popped;
	int content;

	if (*head == NULL)
		return (0);

	popped = *head;
	content = popped->n;
	free(popped);

	*head = (*head)->next;
	return (content);
}

