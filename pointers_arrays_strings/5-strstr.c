#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of the substring needle in haystack
 * @haystack: The main string to search
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the found substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
