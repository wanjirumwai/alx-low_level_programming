#include "lists.h"

/**
 * free_listint2 - A second variation function of a freed a linked list
 * @head:A pointer to the head of the linked list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
