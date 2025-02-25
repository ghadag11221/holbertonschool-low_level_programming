#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Return: The modified string with capitalized words
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
			capitalize = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			 str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			 str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
			 str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			 str[i] == '}')
		{
			capitalize = 1;
		}
		else
		{
			capitalize = 0;
		}
		i++;
	}
	return (str);
}
