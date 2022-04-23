#include "main.h"

/**
 * *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
i++;

for (j = 0; src[j] != '\0'; j++)
dest[i + j] = src[j];

return (dest);
}
