#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: structure to be printed
 *
 * Return: NULL
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		d->name == NULL ? printf("Name: (nil)\n")
			: printf("Name: %s\n", d->name);
		d->age == 0 ? printf("Age: (nil)\n")
			: printf("Age: %f\n", d->age);
		d->name == NULL ? printf("Owner: (nil)\n")
			: printf("Owner: %s\n", d->owner);
	}
}
