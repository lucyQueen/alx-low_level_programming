#include "dog.h"
#include <stdlib.h>

/**
  *free_dog - function that frees dogs
  *@d:struct
  *
  *Return:return 0
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
