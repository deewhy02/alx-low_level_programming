#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
int i;

if (argc > 0)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argc[i]);
}
}
return (0);
}
