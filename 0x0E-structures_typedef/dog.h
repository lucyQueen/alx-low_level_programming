#ifndef _DOG_H_
#define _DOG_H_

/**
  *dog_t - typedef
  *
  */

typedef struct dog dog_t;
/**
  *struct dog - struct
  *@name:name
  *@age:age
  *@owner:owner
  *
  *Description
  *
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
