#include <stdio.h>
/**
 * main - Prints the number of arguments passed to the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
(void)argv; /* Ignore unused parameter */
printf("%d\n", argc - 1);
return (0);
}
