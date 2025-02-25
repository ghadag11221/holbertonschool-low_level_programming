#include "main.h"

/**
 * _strncpy - Copies at most n bytes from src to dest
 * @dest: The destination string to copy to
 * @src: The source string to copy from
 * @n: The maximum number of bytes to copy from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* If n is greater than the length of src, fill the rest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
