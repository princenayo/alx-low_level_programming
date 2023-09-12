#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic information about the dog
 * @name: name of dog, type char
 * @age: age of dog, type float
 * @owner: owner of dog, type char
 *
 * Description: A structure in C, that stores some information
 * about any dog, containing; the name, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
