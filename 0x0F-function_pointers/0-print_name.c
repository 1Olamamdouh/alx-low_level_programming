#include "function_pointers.h"
#include "main.h"


/**
 * print_name - Print a name from a function pointer
 *
 * @name: name of the string
 *
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
