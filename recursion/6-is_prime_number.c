#include "main.h"

/**
 * check_prime - Helper function to check if a number is prime.
 * @n: The number to check.
 * @i: The divisor to test.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
