#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array
 * @array: The array to search in
 * @size: The size of the array
 * @cmp: A pointer to the function to compare values
 *
 * Return: The index of the first element that matches, or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
/* Check for valid input */
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
/* If the comparison function does not return 0, return the index */
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);  /* No match found */
}
