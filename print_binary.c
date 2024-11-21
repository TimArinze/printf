#include "main.h"
/**
 * positive_binary - A function that prints binary recursively
 * @num: Takes the number to print
 * Return: Count of the how many numbers printed
 */
int positive_binary(int number)
{
	int count = 0;

	if (number / 2)
	{
		count = count + positive_binary(number/2);
	}
	_putchar(number % 2 + '0');
	count++;

	return (count);
}
/**
 * negative_binary - A function that prints negative binary recursively
 * @num: Takes the number to print in binary format
 * Return: the count of the binary
 */
int negative_binary(int number)
{
	unsigned int i;
	int count = 0;
	unsigned int num;
	unsigned int mask = 1u << 31;
	/* Highest index for 32bits machine */

	number++; /* Adding one to the figure */
	number = -number;
	/* To remove the - sign */

	num = (unsigned int)number;

	for (i = 0; i < 32; i++)
	{
		/** Where ever there is zero it changes it to one and 1
		 * and one it changes it to zero
		 */
		if (mask & num)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
		count++;
	}
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
	if (number < 0)
	{
		count = count + negative_binary(number);
	}
	else
	{
		count = count + positive_binary(number);
	}

	va_end(ptr);
	return (count);
}
