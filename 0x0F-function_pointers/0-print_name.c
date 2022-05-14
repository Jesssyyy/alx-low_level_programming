#include "function_pointers.h"

/**
 * print_name -  this function prints a name
 * a blank line
 * @nmae: string to print
 * @f: this is a function pointer that recieves a string
 * Return: void
 */

void print_name(char *name, void (*f)(char *));
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
