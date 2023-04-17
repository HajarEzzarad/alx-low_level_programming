#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(*newDog));
	int i, newName, newOwner;

	if (newDog == NULL || !(name) || !(owner))
	{
		free(newDog);
		return (NULL);
	}

	for (newName = 0; name[newName]; newName++)
		;

	for (newOwner = 0; owner[newOwner]; newOwner++)
		;

	newDog->name = malloc(newName + 1);
	newDog->owner = malloc(newOwner + 1);

	if (!(newDog->name) || !(newDog->owner))
	{
		free(newDog->owner);
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	for (i = 0; i < newName; i++)
		newDog->name[i] = name[i];
	 newDog->name[i] = '\0';

	newDog->age = age;

	for (i = 0; i < newOwner; i++)
		newDog->owner[i] = owner[i];
	newDog->owner[i] = '\0';

	return (newDog);
}
