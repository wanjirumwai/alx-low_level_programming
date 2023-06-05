#include "lists.h"

/**
 * Print_listint- This function Prints out a linked list
 * @h: A pointer to the head of the linked list.
 *
 * Return: number of nodes in a linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
