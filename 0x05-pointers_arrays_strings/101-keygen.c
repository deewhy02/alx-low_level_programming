#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - random password for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
int sum;
char c;

srand(time(0));
while (sum <= 2645)
{
c = rand() % 128;
sum += c;
putchar(c);
}
putchar(2772 - sum);
return (0);
}
