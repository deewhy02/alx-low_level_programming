#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: A p pointer to the character thatw will changed
 * @src: A pointer to the character that will be changed
 * @n: value
 * 
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i])
i++;


for (j = 0; j < n && src[j] != '\0'; j++)

dest[i + 1] = src[j];
dest[i + 1] = '\0';

return (dest);
}
