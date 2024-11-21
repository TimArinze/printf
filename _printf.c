#include "main.h"
#include <stdio.h>

/*printType - a struct of character and function pointer*/

printf_t printType[] = {
	{"c", print_char},
	{"s", print_str},
	{"d", print_int},
	{"i", print_int},
	{"b", print_binary},
	{"u", print_unsigned_int},
	{NULL, NULL}
};

/**
 * _printf - a clone of printf
 * @format: the start of the va_list and the string to print
 * Return: the number of character printed
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list ptr;

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	i = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
				continue;
			}
			if (!format[i])
				return (-1);
			count = count + find_and_print(format[i], ptr);
			continue;
		}
		_putchar(format[i]);
		count++;
	}
	va_end(ptr);

	return (count);
}

/**
 * find_and_print - A function that finds the identifier and print
 *@character: The supposed identifier
 *@ptr: pointer to the suppoesed function
 * Return: The count of the whatever is printed
 */
int find_and_print(char character, va_list ptr)
{
	int i, count;

	for (i = 0; printType[i].type != NULL; i++)
	{
		if (character == *printType[i].type)
		{
			count = printType[i].printer(ptr);
			return (count);
		}
	}
	/* when the character is not in the identifier */
	_putchar('%');
	_putchar(character);
	return (2);
}
