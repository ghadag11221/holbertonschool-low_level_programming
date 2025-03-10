#ifndef DOG_H
#define DOG_H
/* Include the necessary libraries */
#include <stddef.h>
/* Define the dog structure */
struct dog {
char *name;
float age;
char *owner;
};
/* Add the function prototype for print_dog */
void print_dog(struct dog *d);
#endif /* DOG_H */
