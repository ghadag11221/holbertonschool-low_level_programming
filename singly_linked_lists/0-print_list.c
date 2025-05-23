#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
count++;
h = h->next;
}
return (count);
}
