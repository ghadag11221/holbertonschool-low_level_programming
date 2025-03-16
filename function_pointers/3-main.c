#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs the requested operation on two integers.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments passed to the program.
 *
 * Return: 0 if successful, otherwise exits with a status code.
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*operation)(int, int);  // Function pointer for the operator function.
// Check if the correct number of arguments is passed.
if (argc != 4)
{      
printf("Error\n");  // Print error message and exit with status 98.
exit(98);
}
// Convert arguments from string to integer.
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
// Get the correct function for the operator.
operation = get_op_func(argv[2]);
// If the operator is invalid, print error and exit with status 99.
// if (operation == NULL)
{
printf("Error\n");
exit(99);
}
// Check if division or modulo by zero is attempted.
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");  // Print error message and exit with status 100.
exit(100);
}
// Perform the operation and print the result.
printf("%d\n", operation(num1, num2));
return (0);  // Return success.
}
