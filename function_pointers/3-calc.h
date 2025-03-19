#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - Returns the sum of two numbers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Sum of a and b.
 */
int op_add(int a, int b);

/**
 * op_sub - Returns the difference of two numbers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Difference of a and b.
 */
int op_sub(int a, int b);

/**
 * op_mul - Returns the product of two numbers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Product of a and b.
 */
int op_mul(int a, int b);

/**
 * op_div - Returns the quotient of two numbers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Quotient of a divided by b.
 *         If b is 0, exits with status 100.
 */
int op_div(int a, int b);

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Remainder of a divided by b.
 *         If b is 0, exits with status 100.
 */
int op_mod(int a, int b);

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator passed as argument.
 *
 * Return: Pointer to the corresponding function,
 *         or NULL if operator is not found.
 */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

