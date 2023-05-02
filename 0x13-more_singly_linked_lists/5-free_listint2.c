#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees alistint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;

	}
}

