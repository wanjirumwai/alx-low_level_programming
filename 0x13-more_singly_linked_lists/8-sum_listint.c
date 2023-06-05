#include "lists.h"

/**
 * sum_listint -This Function adds up all the elements in a linked list
 * @head: A pointer to the head of the linked list.
 *
 * Return: the solution
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
