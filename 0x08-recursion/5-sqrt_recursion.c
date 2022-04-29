#include "main.h"

/**
 * _evaluate - evaluate function sqrt
 * @i: integer
 * @n: integer
 * Return: evaluate sqrt
 */
int _evaluate(int i, int n)
{
if (n == 0 || n == 1)
return (n);

else if (i * i < n)
return (_evaluate(i + 1, n));

else if (i * i == n)
return (1);
return (-1);
return (-1);
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: pointer to the memory to be fill
 *
 * Return: sqrt recursion
 */
int _sqrt_recursion(int n)
{
int i = 0;
if (i < 0)
return (-1);

else
return (_evaluate(i, n));
}
