#include "main.h"

/**
 * _get_printer - checks for a registered printer for a given specifier
 * @specifier: the specifier to get a printer for
 *
 * Return: the printer found. if no valid printer exists,
 * a default NULL-based printer is returned
 */
printer _get_printer(const char *specifier)
{
	int i;
	static printer printers[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"d", _print_decimal},
		{"i", _print_int},
		{"b", _print_binary},
		{"S", _print_str_nonprintable},
		{"r", _print_str_reverse},
		{"R", _print_rot13},
		{"u", _print_uint},
		{"o", _print_octal},
		{NULL, NULL}
	};

	for (i = 0; printers[i].specifier != NULL; i++)
	{
		/**
		 * This current implementation assumes the specifier is
		 * one character long. This needs to be updated to
		 * support specifiers containing more chatacters
		 */
		if (*specifier == *(printers[i].specifier))
			break;
	}

	return (printers[i]);
}
