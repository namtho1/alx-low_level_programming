#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* _strdup - Duplicates a string in memory.
* @str: The string to duplicate.
*
* Return: A pointer to the newly allocated memory
*/
char *_strdup(char *str)
{
char *dup;
int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup[i] = str[i];

return (dup);
}

/**
* new_dog - Creates a new dog.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*
* Return: A pointer to the newly created dog structure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);

new_dog->name = _strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->age = age;

new_dog->owner = _strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

return (new_dog);
}

