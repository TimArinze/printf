#include "main.h"
/**
 * print_char - function that prints character
 * @ptr: pointer to the argument to print
 */
int print_char(va_list ptr)
{
	_putchar(va_arg(ptr, int));
	return(1);
}
