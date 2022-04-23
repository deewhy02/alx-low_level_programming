#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array of integer
 * @n: number of element of the array
 *
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
int i, j, tmp;

j = n - 1;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
j--;
}

}

