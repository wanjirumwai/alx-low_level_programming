#include <stdlib.h>
#include "lists.h"

/**
 * free_list -This Function frees a linked list
 * @head: contains linked list to be freed by the function
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
