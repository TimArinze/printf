#include "main.h"
/**
 * _printf - mimic printf from stdio
 * Description: produces output according to a format
 * write output to stdout, the standard output stream
 * @format: character string composed of zero or more directives
 * Return: the number of the characters printed
 * (excluding the null bytes used to end output to strings)
 * return -1 for incomplete identifier error
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int specials_printed = 0, char_printed = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_printed++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			char_printed++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		specials_printed = print_specials(format[i + 1], arg);
		if (specials_printed == -1 || specials_printed != 0)
			i++;
		if (specials_printed > 0)
			char_printed += specials_printed;
		if (specials_printed == 0)
		{
			_putchar('%');
			char_printed++;
		}
	}
	va_end(arg);
	return (char_printed);
}
