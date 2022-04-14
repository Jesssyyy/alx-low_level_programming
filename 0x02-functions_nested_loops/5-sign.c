

#include "main.h"

/**
 * print_sign - Print the sign of a number.
 * @n: The number of which the sign will still be printed.
 *
 * Return: 1 if the mnumber is greater than zero,
 *         0 if the number is zero,
 *         -1 if the number is less than zero.
 */
int print-sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
