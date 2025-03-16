#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter on each element
 * of an array
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: A pointer to the function to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;  /* Declare the variable outside the loop */

	/* Add a blank line after the declaration section */
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)  /* Iterate through the array */
		{
			action(array[i]);
		}
	}
}
