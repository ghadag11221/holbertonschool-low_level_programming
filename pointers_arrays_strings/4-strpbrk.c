#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the set of bytes to search for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)  /* Iterate over each character of s */
{
char *a = accept;
/* Check if current character in s matches any character in accept */
while (*a)
{
if (*s == *a)
return (s);  /* Return pointer to the matched byte in s */
a++;
}
s++;  /* Move to the next character in s */
}
return (NULL);  /* No match found, return NULL */
}
