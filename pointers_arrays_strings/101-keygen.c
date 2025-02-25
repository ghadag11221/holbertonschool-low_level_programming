#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
    char password[7];
    int i, sum = 0;

    srand(time(NULL));

    // Generate 6 random characters
    for (i = 0; i < 6; i++)
    {
        password[i] = rand() % 94 + 33; // Random characters between ASCII 33 ('!') and 126 ('~')
        sum += password[i];
    }

    // Calculate the last character to make the sum equal to 2772 (desired total sum)
    password[6] = 2772 - sum;

    password[7] = '\0'; // Null terminate the string

    printf("%s", password);

    return (0);
}

