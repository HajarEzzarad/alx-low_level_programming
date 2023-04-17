#include "dog.h"
#include <stdlib.h>

/*
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: struct dog.
 * if fails, return NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *neaveauDog = (dog_t *) malloc(sizeof(dog_t));
	if (neaveauDog == NULL)
	{
		return (NULL);
	}
	neaveauDog->name =(char *) malloc(strlen(name) + 1);
	neaveauDog->owner = (char *) malloc(strlen(owner) + 1);

	if (neaveauDog->name == NULL || neaveauDog->owner == NULL)
	{
		free(neaveauDog);
		return (NULL);
	}

	strcpy(neaveauDog->name, name);
	strcpy(neaveauDog->owner, owner);

	neaveauDog->age = age;
	return (neaveauDog);
}
