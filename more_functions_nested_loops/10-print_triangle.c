#include "main.h"

/**
 * print_triangle - prints a right-angled triangle.
 * @size: the height and base of the triangle.
 */
void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++)  /* Loop through rows */
    {
        for (j = 1; j <= size; j++)  /* Loop through columns */
        {
            if (j <= size - i)
                _putchar(' ');  /* Print space */
            else
                _putchar('#');  /* Print # */
        }
        _putchar('\n');  /* Move to the next line after each row */
    }
}
