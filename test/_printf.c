#include "main.h"

/**
 * _printf - prints anything
 * @format: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	printer printer;
	int i = 0;
	int characters_printed = 0;

	va_start(args, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			characters_printed++;
		}

		if (!format[i])
			break;

		printer = _get_printer(&format[i + 1]);
		if (printer.specifier != NULL)
		{
			characters_printed += printer.run(args);
			i += 2; /* move past the specifier */
			continue;
		}

		if (!format[i + 1])
			break;

		_putchar(format[i]);
		characters_printed++;

		if (format[i + 1] == '%')
			i += 2; /* move past the % */
		else
			i++;
	}

	va_end(args);
	return (characters_printed);
}
