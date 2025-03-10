#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/* 
 * struct dog - Represents a dog's basic information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* Add the function prototype for print_dog */
void print_dog(struct dog *d);
#endif /* DOG_H */
