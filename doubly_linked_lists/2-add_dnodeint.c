#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer data for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* If the list is not empty, update the previous head's prev pointer */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Set the new node as the head of the list */
	*head = new_node;

	return (new_node);
}
