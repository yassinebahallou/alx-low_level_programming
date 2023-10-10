#include "dog.h"
#include <stdlib.h>
/**
* new_dog - function that creates a new struct of type dog
*
* @name: parameter name as struct
* @age: parameter age as struct
* @owner: parameter owner as struct
*
* Return: returns pointer to new dog of datatype dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int new_len, blen, i;
dog_t *lain;

new_len = blen = 0;
while (name[new_len++])
;
while (owner[blen++])
;
lain = malloc(sizeof(dog_t));
if (lain == NULL)
return (NULL);

lain->name = malloc(new_len *sizeof(lain->name));
if (lain == NULL)
return (NULL);
for (i = 0; i < new_len; i++)
lain->name[i] = name[i];

lain->age = age;

lain->owner = malloc(blen * sizeof(lain->owner));
if (lain == NULL)
return (NULL);
for (i = 0; i < blen; i++)
lain->owner[i] = owner[i];
return (lain);
}
