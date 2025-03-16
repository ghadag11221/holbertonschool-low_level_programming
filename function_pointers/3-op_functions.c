#include <stdlib.h>  
#include <stdio.h> 
#include "calc.h"
/**
 * op_add - Adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: division of a by b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - Modulo of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
