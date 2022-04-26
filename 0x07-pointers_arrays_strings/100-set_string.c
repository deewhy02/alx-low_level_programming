#include "main.h"
#include <stdio.h>

/**
 * set_string - the sum of the two diagonal of the square matrix of integer
 *@a: 2d array of chars
 *@size: number matrix
 * Return: void
 */
void set_string(char **s, char *to)
{
int i;
int sum1 = 0;
int sum2 = 0;

i = 0;
while (i < size)
{
sum1 = sum1 + *(a + i * size + i);
sum2 = sum2 + *(a + i * size + size - i - 1);

i++;
}
printf("%i, %i\n", sum1, sum2);
}


