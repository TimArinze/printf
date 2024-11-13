#include "main.h"
/**
 * print_char - function that prints character
 * @ptr: pointer to the argument to print
 */
int print_char(va_list ptr)
{
	char character = va_arg(ptr, int);

	if (character == NULL)
		return(0);
	_putchar(character);
	return(1);
}
