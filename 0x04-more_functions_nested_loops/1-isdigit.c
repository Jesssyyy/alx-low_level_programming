#include "main.h"
/**
 * _isdigit - checkes if the no is b/n 0 t0 9
 * @c: input no
 * Return: 1 if c is a digit (0 to 9), 0 otherwise.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return(0);
}
_putchar('\n');
}
