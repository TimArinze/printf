#include "main.h"
/**
 * _printf - a clone of printf
 * @format: the start of the va_list and the string to print
 * Return: the number of character printed
 */
int _printf(const char *format, ...)
{
	int i, j;
	int count = 0;
	va_list ptr;

	printf_t printType[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	if (format == NULL)
		return (count);
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
			for (j = 0; j < 3 ; j++)
			{
				if (format[i] == *printType[j].type)
				{
					count = count + printType[j].printer(ptr);
					break;
				}
			}
			continue;
		}
		_putchar(format[i]);
		count++;
	}
	va_end(ptr);

	return(count);
}
