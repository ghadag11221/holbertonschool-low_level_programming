#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: An integer less than, equal to, or greater than zero if
 *         s1 is found to be less than, to match, or be greater than s2,
 *         respectively.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare characters one by one */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	/* If both strings are the same up to the null terminator, compare lengths */
	return (s1[i] - s2[i]);
}
