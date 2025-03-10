#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - structure representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MAIN_H */
