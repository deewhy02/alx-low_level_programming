#include "main.h"

/**
 * _puts - print a string
 * @str: A pointer to an int that will be printed
 *
 * Return: void
 */
void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar('\n');
}
