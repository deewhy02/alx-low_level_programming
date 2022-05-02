#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the multiplication of two intgers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 if it is true, 1 if false
 */
int main(int argc, char *argv[])
{
int a;
int b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);
}
