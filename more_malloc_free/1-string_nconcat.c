#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to newly allocated memory containing s1 followed by
 *         the first n bytes of s2, NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *concat;

	if (s1)
		while (s1[len1])
			len1++;
	if (s2)
		while (s2[len2])
			len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (!concat)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}
