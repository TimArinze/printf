#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct printer - format printer struct
 * @spec: the format specifier
 * @fn: the function that handles @spec
 * */

typedef struct printer
{
	char *spec;
	int (*fn)(va_list);
} print_type;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list arg);
int _print_str(va_list arg);
int _print_int(va_list arg);
int _call_print_fn(char ch, va_list ap);

#endif /* PRINTF_H */
