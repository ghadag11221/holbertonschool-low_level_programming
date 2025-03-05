#include <stdio.h>
#include <stdlib.h>  /* For atoi */
#include <ctype.h>   /* For isdigit */
/**
 * main - Adds positive numbers passed as arguments
 * @argc: The number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
/* Check if no arguments are passed */
if (argc == 1)
{
printf("0\n");
return (0);
}
/* Loop through each argument */
for (i = 1; i < argc; i++)
{
/* Check if each character of the argument is a digit */
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
