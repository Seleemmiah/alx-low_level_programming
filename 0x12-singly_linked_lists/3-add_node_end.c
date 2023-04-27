#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}


/**
 * add_node_end - add a new node at the end of the list
 * @head: Address of the first node of a list
 * @str: string to add to the new node
 *
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);

	}
	temp->len = _strlen(temp->str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
