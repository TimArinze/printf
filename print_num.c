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
 * print_unsigned_int - A function that prints unsigned integer
 * @num: The number to print
 * Return: The count of what is printed
 */
int print_unsigned_int(va_list ptr)
{
	int count = 0;

	int num = va_arg(ptr, int);

	if (num < 0)
		num = -num;
	count = count + print_num(num);

	return (count);
}

/**
 * print_num - A function that prints integer using putchar recursively
 * @num: The number to be printed
 * Return: the count of the digits that makes up the number
 */

int print_num(int number)
{
	int digits = 0;

	 /** Try to handle INT_MIN a special case if not it will return
         * "--214748364("
         */
	 if (number == -2147483648)
        {
                _putchar('-');
                _putchar('2');
                number = 147483648;
		digits = digits + 2;
        }
	if (number < 0)
	{
		_putchar('-');
		number = -number;
		digits++;
	}
	if (number/10)
	{
		digits +=print_num(number/10);
		/* Recursive call for all digits except the last one */
	}
	_putchar(number%10+'0');
	digits++;
	return (digits);
}
