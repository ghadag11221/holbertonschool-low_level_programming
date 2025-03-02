#include "main.h"

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
		return (s);
	}
	return (NULL);
}
