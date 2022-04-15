#include <stdio.h>

/**
 * main - print fizz for int divisible by 3 and buzz for 5
 *
 * Return: int
 */
int main(void)
{
int i;

for (i = 0; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("fizz");
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("Fizz,Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
_putchar(' ');
else
_putchar('\n');
}
return (0);
}
