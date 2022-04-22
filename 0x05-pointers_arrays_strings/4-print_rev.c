#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: characters
 *
 * Return: nothing
 */

void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
while (i)
{
putchar(s[i - 1]);
i--;
}
putchar('\n');
