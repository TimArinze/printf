#include "main.h"
/**
 * recursive_binary - A function that prints binary recursively
 * @num: Takes the number to print
 * Return: Count of the how many numbers printed
 */
int recursive_binary(int number)
{
	int count = 0;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
		count++;
	}
	if (number / 2)
	{
		count = count + recursive_binary(number/2);
	}
	_putchar(number % 2 + '0');
	count++;

	return (count);
}
/**
 * print_binary - A function that prints binary
 * @ptr: The ptr that points to the arg that should be printed as binary
 * Return: The count of the binary
 */
int print_binary(va_list ptr)
{
	int number;
	int count = 0;

	number = va_arg(ptr, int);
	count = count + recursive_binary(number);

	va_end(ptr);
	return (count);
}
