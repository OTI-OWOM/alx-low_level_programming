#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strlen - returns the length of a string
 *@s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 *_strcpy - copies the string pointed to by src
 *including the terminating null byte (\0)
 *to the buffer pointer to by dest
 *@dest: pointer to the buffer in which we can copy the string
 *@src: string to be copied
 *
 * Return: the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;

while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest [i] = src[i];
}
dest[i] = '\0';
return (dest);
}


/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);

dog = malloc(sizeof(dog_t));

if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));

if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}
