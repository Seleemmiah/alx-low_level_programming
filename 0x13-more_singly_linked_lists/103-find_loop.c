#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *goat, *dog;

	goat = dog = head;
	while (goat && dog && dog->next)
	{
		goat = goat->next;
		dog = dog->next->next;
		if (goat == dog)
		{
			goat = head;
			break;
		}
	}
	if (!goat || !dog || !dog->next)
		return (NULL);
	while (goat != dog)
	{
		goat = goat->next;
		dog = dog->next;
	}
	return (dog);

}
