#include "main.h"
/**
 * print_str - function that prints sting
 * @ptr: the pointer to print
 */
int print_str(va_list ptr)
{
	char *str = va_arg(ptr, char *);
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return(i);
}
