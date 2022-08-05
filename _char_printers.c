#include "main.h"

/**
 * _print_char - prints a character
 * @args: the arguments list
 *
 * Return: 1 (number of chars printed)
 */
int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
