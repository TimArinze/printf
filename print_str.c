#include "main.h"
/**
 * print_str - function that prints sting
 * @ptr: the pointer to print
 */
int print_str(va_list ptr)
{
	char *str = va_arg(ptr, char *);
	char *null = "(null)";
	int i = 0;
	
	if (str == NULL)
	{
		while (null[i] != '\0')
		{
			_putchar(null[i]);
			i++;
		}
		return(i);
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return(i);
}
