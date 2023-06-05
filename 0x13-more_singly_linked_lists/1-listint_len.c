#include "lists.h"

/**
 * listint_len - this function returns the number of elements in a linked lists
 * @h:A pointer to the head of linked list to traverse
 *
 * Return: number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
