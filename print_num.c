#include "main.h"
/**
 * print_int - A function that prints integers
 * @num: The integer to be printed
 * Return: The number of character that makes up the int
*/

int print_int(va_list ptr)
{
	int counts = 0;
	int num = va_arg(ptr, int);

	counts = counts + print_num(num);
	return (counts);
}

/**
 * print_num - A function that prints integer using putchar recursively
 * @num: The number to be printed
 * Return: the count of the digits that makes up the number
 */

int print_num(int number)
{
	static int digits = 0;

	if (number < 0)
	{
		_putchar('-');
		number = number * (-1);
		digits++;
	}
	if (number/10)
	{
		print_num(number/10);
	}
	_putchar(number%10+'0');
	digits++;
	return (digits);
}
