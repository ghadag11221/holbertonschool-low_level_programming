#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list node
 * @n: integer data
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif /* LISTS_H */
