#include "main.h"
#include <stddef.h>  /* Include this to define NULL */

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	/* If character is not found, return NULL */
	if (c == '\0')
	{
		return (s);  /* This will return a pointer to '\0' */
	}

	return (NULL);  /* Explicit return NULL if the character isn't found */
}
