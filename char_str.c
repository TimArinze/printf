#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * print_char - function that prints character
 * @arg: The argument
 * return: interger
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
/**
 * print_str - function that prints string
 * @arg: argument
 * Return: integer of number printed
 */
int print_str(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		return (-1);
	if (*str == '\0')
		return (-1);
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
/**
 * print_STR - prints a string with a 'S' (upper case) specifier
 * @arg: argument
 * Return: number of character printed
 */
int print_STR(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);
	for (i = 0; str[i]; i++)
	{
		if ((str[i] < 32 && str[i] > 0) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (i < 16)
				_putchar('0');
			print_unsignedIntToHex(str[i], 'A');
		}
		else
			_putchar(str[i]);
	}
	return (i);
}
