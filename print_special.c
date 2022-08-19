#include "main.h"
/**
 * print_specials - prints special character
 * @next: character after the %
 * @arg: argument for the identifer
 * Return: the number of characters printed
 */
int print_specials(char next, va_list arg)
{
	int index;
	specialsStruct functs[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	for (index = 0; functs[index].indentifier != NULL; index++)
	{
		if (functs[index].indentifier[0] == next)
			return (functs[index].printer(arg));
	}
	return (0);
}
