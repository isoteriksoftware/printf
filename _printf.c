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

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			characters_printed++;
		}
		if (!format[i])
			return (characters_printed);
		if (format[i] == '%' && _strlen(format) == 1)
			return (-1);
		printer = _get_printer(&format[i + 1]);
		if (printer.specifier != NULL)
		{
			characters_printed += printer.run(args);
			i += 2; /* move past the specifier */
			continue;
		}

		if (!format[i + 1])
			return (characters_printed);

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
