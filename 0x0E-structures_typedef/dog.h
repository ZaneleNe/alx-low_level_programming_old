#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog structure
 * @name: name of the dog
 * @owner: name of the owner of the dog
 * @age: age of the dog
 *
 * Description: This structure helps store some useful information
 *              about a dog i.e. its name, the owner and its age.
 */
struct dog
{
	char *name, *owner;
	float age;
};

/*Defines an alias of dog structure*/
typedef struct dog dog_t;

/*Prototype for function to print dog structure contents*/
void print_dog(struct dog *d);

/*Prototype for function to initalize all the members of dog struct*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/*Prototype for function to create a new dog*/
dog_t *new_dog(char *name, float age, char *owner);

/*Prototype for function to free memory allocated to dog struct*/
void free_dog(dog_t *d);

#endif
