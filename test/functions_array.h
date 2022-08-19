#include "main.h"
#include <stdlib.h>
/**
 * function - An array of functions
 * all the special characters for the printf function
 */
print_type functions[] = {
	{"c", print_char},
	{"s", print_str},
	{"d", print_int},
	{"i", print_int},
	{"o", print_oct},
	{"u", print_unsigned},
	{NULL, NULL}
};
#endif /* FUNCTIONS_ARRAY */
