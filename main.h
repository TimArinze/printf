#ifndef MAIN_H

#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int print_specials(char next, va_list arg);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
void print_binary(unsigned int n, unsigned int *printed);

/**
 * struct specialsStruct - structure
 * definition of a printTypeStruct
 * @indentifier: type
 * @printer: funtion to print
 */
typedef struct specialsStruct
{
	char *indentifier;
	int (*printer)(va_list);
} specialsStruct;

#endif
