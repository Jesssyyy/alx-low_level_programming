#include <stdio.h>
#include "main.h"

/**
 * _strlen - counts the lenght of a string
 * @s: string
 *
 * Return: the value of the lenght i
 */

int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}
