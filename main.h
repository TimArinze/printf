#ifndef MAIN_H

#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int find_and_print(char character, va_list ptr);
void print_binary(unsigned int n, unsigned int *printed);
int print_unsigned_to_binary(va_list arg);

/**
 * struct printfType - struct
 * @type: the character str for the type
 * @printer: the function pointer
 */
typedef struct printfType
{
	char *type;
	int (*printer)(va_list);
} printf_t;

#endif
