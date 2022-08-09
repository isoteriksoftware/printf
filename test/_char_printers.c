#include "main.h"

/**
 * _print_char - prints a character
 * @args: the arguments list
 *
 * Return: 1 (number of chars printed)
 */
int _print_char(va_list args)
{
	char ch = (char)va_arg(args, int);

	_putchar(ch);
	return (1);
}

/**
 * _print_str - prints a string
 * @args: the arguments list
 *
 * Return: number of chars printed
 */
int _print_str(va_list args)
{
	int count;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
