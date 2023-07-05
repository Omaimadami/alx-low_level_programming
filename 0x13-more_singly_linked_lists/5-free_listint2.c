#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: Pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	listint_t *current, *temp;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
