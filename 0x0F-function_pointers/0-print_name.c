/**
 * file - 0-print_name.c
 * Author: Adeyemi Adedayo
 */

#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to be printed
 * @f: callback function that print name
 */

void print_name(char *name, void (*f)(char *))
{
if (!f || !name)
return;
(*f)(name);
}
