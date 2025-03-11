#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - Copies a string to a newly allocated space in memory
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *new_name, *new_owner;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
new_name = malloc(sizeof(char) * (_strlen(name) + 1));
if (new_name == NULL)
{
free(dog);
return (NULL);
new_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (new_owner == NULL)
{
free(new_name);
free(dog);
return (NULL);
}
_strcpy(new_name, name);
_strcpy(new_owner, owner);
dog->name = new_name;
dog->age = age;
dog->owner = new_owner;
return (dog);
}
