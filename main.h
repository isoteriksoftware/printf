#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printer - structure for printing to stdout, given a specifier
 * @specifier: the specifier recognized by this printer (without the %)
 * @run: the function to run when this printer is invoked
 */
typedef struct printer
{
	char *specifier;
	int (*run)(va_list);
} printer;

printer _get_printer(const char *specifier);
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list);
int _print_str(va_list);
int _print_decimal(va_list);
int _print_int(va_list);
int _print_binary(va_list);
int _print_str_nonprintable(va_list);

#endif /* MAIN_H */
