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
/**
 * _print_str_nonprintable - prints a string and nonprintable
 * character ascii values
 * @args: arguments list
 *
 * Return: number of chars printed
 */
int _print_str_nonprintable(va_list args)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
