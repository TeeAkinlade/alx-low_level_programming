#ifndef DOG_H
#define DOG_H
/**
 * init_dog - initialize a variable
 * @d: the dog
 * @age: the age of the dog
 * @name: the name of the dog
 * @owner: the owner of the dog
 * Return: on success 1
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
