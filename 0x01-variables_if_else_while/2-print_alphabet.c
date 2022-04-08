#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;

srand(time(0));
n = rand() - RAND_MAX / 2;

for (c = 0; c < 26; ++c)
putchar('a' + c);

putchar('\n');
return (0);
}
