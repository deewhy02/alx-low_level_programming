#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will be changed
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src);
{
int j;
int i;

j = 0;

while (dest[j] != '\0')
{
j++;
}

i = 0;
while (src[i] != '\0')
{
dest[j] = src[i];
i++;
j++;
dest[j] = '\0';

return (dest);
}
