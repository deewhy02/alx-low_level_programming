#include "main.h"

/**
 * _strlen - Length of a string
 * @s: A pointer to an int that will be changed
 *
 * Return: void
 * /
int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}

return (u);
}
