#include "main.h"
#include <stdio.h>

/**
 * print_array - print an element of an array of integer
 * @a: A pointer to an int that will be changed
 * @n: return value n
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
