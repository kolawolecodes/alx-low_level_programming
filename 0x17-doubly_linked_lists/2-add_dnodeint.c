#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a list
 *
 * @head: first node in list
 * @n: value to be added in new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *latest_node;

	latest_node = malloc(sizeof(dlistint_t));
	if (!latest_node)
		return (NULL);

	latest_node->n = n;
	latest_node->prev = NULL;
	latest_node->next = NULL;

	if (!*head)	/* check if head is NULL */
		*head = latest_node;
	else	/* head has nodes */
	{
		latest_node->next = *head;
		(*head)->prev = latest_node;	/* update prev pointer */
		*head = latest_node;
	}
	return (latest_node);
}
