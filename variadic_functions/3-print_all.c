#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the format
 * @format: List of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, printed = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (printed)
			printf(", "); /* Add separator only after the first valid argument */

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			printed = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			printed = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			printed = 1;
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			printed = 1;
			break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
