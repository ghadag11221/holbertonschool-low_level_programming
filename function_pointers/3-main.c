#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
/**
 * main - Performs simple arithmetic operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", operation(num1, num2));
return (0);
}
