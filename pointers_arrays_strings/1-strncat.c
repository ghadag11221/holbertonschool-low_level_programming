#include "main.h"

/**
 * _strncat - Concatenate at most n bytes from src to dest
 * @dest: The destination string to append to
 * @src: The source string to append from
 * @n: The maximum number of bytes to append from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, dest_len = 0;
/* Find the length of dest */
while (dest[dest_len] != '\0')
{
dest_len++;
}
/* Append up to n characters from src */
while (i < n && src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}
/* Null-terminate the result */
dest[dest_len + i] = '\0';
return (dest);
}
