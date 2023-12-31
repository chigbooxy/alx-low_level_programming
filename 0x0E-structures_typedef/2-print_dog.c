#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_dog - prints a struct dog to stdout
* @d: pointer to struct dog
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
