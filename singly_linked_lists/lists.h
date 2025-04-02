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
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h);

#endif /* LISTS_H */
