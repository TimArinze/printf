#include <unistd.h>
/**
 * _putchar - is a function like standard putchar
 * @c: the argument character
 * Return: integer(write)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
