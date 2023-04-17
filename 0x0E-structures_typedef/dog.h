#ifndef _DOG_H
#define _DOG_H

/*
 *dog_h - typedef for struct dog
 * */

typedef struct dog dog_h;


/*
 ** struct dog - struct that stores some information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char * name;
	float age;
	cahr * owner;
};

dog_h *new_dog(char *name, float age, char *owner);
#endif
