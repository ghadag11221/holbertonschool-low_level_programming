#include <stdio.h>
#include <stdlib.h>  /* For atoi */
/**
 * main - Multiplies two numbers passed as arguments
 * @argc: The number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
    /* Check if the program has received exactly 3 arguments */
if (argc != 3)
{
printf("Error\n");
return (1);  /* Exit with status 1 if incorrect number of arguments */
}
    /* Convert the arguments from strings to integers and multiply them */
num1 = atoi(argv[1]);  /* Convert argv[1] to an integer */
num2 = atoi(argv[2]);  /* Convert argv[2] to an integer */
result = num1 *num2;  /* Multiply the two integers */
    /* Print the result */
printf("%d\n", result);
return (0);  /* Exit with status 0 on success */
}
