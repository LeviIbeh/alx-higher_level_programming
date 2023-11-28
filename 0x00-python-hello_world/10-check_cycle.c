#include "lists.h"

/**
 * check_cycle - checks for cycles in singly linked lists
 * @list: pointer to list address
 * Return: 0 for null, 1 for success
 */
int check_cycle(listint_t *list)
{
	listint_t *p2 = list;
	listint_t *prev = list;

	if (!list)
		return (0);

	while (p2 && prev && prev->next)
	{
		p2 = p2->next;
		prev = prev->next->next;
		if (p2 == prev)
			return (1);
	}
	return (0);
}
