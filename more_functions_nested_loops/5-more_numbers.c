#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('0' + n / 10);  /* Print the tens digit */
			_putchar('0' + n % 10);      /* Print the ones digit */
		}
		_putchar('\n');
	}
}
