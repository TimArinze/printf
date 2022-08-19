#ifndef MAIN_H

#define MAIN_H

#include <stdarg.h>

int _putchar(char c);


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
