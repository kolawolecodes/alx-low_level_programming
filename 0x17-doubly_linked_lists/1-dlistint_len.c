#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 *
 * @h: first node of the linked list
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int count = 0;

	if (!h)
		return (count);

	current = h;
	while (current)
	{
		count++;	/*Tranverising till current = NULL */
		current = current->next;
	}
	return (count);
}
