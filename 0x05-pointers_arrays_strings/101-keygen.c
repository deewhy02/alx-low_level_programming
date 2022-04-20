#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * my task
 */
int main(void)
{
int num;
srand(time(0));
num = rand() - RAND_MAX / 2;
printf("%i\n", num);
return (0);
}
