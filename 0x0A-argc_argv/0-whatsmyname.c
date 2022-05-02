#include "main.h"
#include <stdio.h>

/**
 * main - print name followed by a new line
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);

return (0);
}
