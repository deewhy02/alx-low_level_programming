#include "main.h"

/**
 * *_memset - fills memory with a constant bytes
 *@s: pointers block of memory to fills
 *@b: value to set
 *@n: bytes of the memory
 *
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b; /*add 1 position s*/
}

return (s);

}

