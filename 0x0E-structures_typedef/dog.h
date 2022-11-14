#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type deacriion
 * @owner: the dog owner
 * @name: name
 * @age: dog age
 * Return: on success 1
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef description
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *dog);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
