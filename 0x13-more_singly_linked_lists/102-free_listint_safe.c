#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - reallocactes memory for an array of pointers
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 *
 * Return: pointer to the list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
		
