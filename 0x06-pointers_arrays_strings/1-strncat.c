#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: A p pointer to the character thatw will changed
 * @src: A pointer to the character that will be changed
 * @n: value
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i])
i++;

for (j = 0; j < n && src[j] != '\0'; j++)

dest[i + j] = src[j];
dest[i + j] = '\0';

return (dest);
}
