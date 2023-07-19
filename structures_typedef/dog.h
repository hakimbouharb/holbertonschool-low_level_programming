#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 */

/**
 * struct dog - A new describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/***
 * dog_t - Type def for struct dog
 */
typedef struct dog dog_t;

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
