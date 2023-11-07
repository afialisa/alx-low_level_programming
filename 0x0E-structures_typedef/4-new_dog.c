#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a program that returns the length of a string
 * @s: evaluated string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
/**
 * *_strcpy - a program that copies the string pointed by src
 * including the terminating null byte (\0)
 * @dest: pointer to the buffer that is copied to the string
 * @src: copied string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len, a;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (a = 0; a < len; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
/**
 * new_dog - a program that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: the dog owner
 *
 * Return: pointer to the new dog (Success), NULL otherwise
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
