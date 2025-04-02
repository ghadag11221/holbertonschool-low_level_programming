#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - Singly linked list
 * @str: String (malloc'ed string)
 * @len: Length of the string
 * @next: Points to the next node
 *
 * Description: Structure for singly linked list node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the first element in the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */
