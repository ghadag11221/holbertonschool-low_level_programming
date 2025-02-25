#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int len = 0, n, i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
