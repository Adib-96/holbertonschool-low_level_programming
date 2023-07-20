#ifndef DOG_S
#define DOG_S
/**
 *struct dog - dog strutures
 *@name: dog name
 *@age:dog age
 *@owner:dog owner
 * Description: Create a structure (blueprint) for other instances.
 */
struct dog
{
char *name;
float age;
char *owner;
};
/*
 * my_dog -typedef for struct dog
 */
typedef struct dog my_dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
