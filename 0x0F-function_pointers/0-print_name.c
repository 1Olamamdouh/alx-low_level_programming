#include "function_pointers.h"

/**
 * print_name - Print a name from a function pointer
 *
 * @name: string function
 *
 * @f: function pointer +  takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
