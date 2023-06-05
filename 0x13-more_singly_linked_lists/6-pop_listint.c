#include "lists.h"

/**
 * pop_listint -well this formula deletes the head node of a linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: whats inside the deleted elements,
 * or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
