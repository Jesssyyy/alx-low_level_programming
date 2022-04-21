#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap numbers function
 * @a: integer
 * @b: interger
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
