#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string */
return;
_print_rev_recursion(s + 1); /* Recursively call for next character */
_putchar(*s); /* Print character after recursive call */
}
