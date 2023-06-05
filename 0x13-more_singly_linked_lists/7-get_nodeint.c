#include "lists.h"

/**
 * get_nodeint_at_index -This function returns the nth node of a linked list
 * @head: A pointer to the head of the linked list.
 * @index: Shows which node to return to.
 *
 * Return: To the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
