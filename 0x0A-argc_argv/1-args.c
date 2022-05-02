#include "main.h"
#include <stdio.h>

/**
 * main - number of argument passed into it followed by a new line
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);

return (0);
}

