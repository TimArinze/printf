#include "main.h"
/**
 * print_int - prints an integer
 * @arg:argument
 * Return: 0
 */
int print_int(va_list arg)
{
	unsigned int divisor = 1, i, resp, char_printed = 0;

	if (n < 0)
	{
		_putchar('-');
		char_printed++;
		n *= -1;
	}
	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10, char_printed++)
	{
		resp = n / divisor;
		_putchar('0'+ resp);
	}
	return (char_printed++);
}
