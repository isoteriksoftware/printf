#include "main.h"

/**
 * _print_decimal - prints a decimal number
 * @args: list of arguments
 *
 * Return: number of chars printed
 */
int _print_decimal(va_list args)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(args, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}

	return (count);
}

/**
 * _print_int - prints an integer
 * @args: the arguments list
 *
 * Return: number of chars printed
 */
int _print_int(va_list args)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(args, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}
/**
 * _print_octal - takes an unsigned int and prints it in octal notation
 * @args: arguments
 *
 * Return: number of digits printed
 */
int _print_octal(va_list args)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(args, unsigned int);
	m = 1073741824; /* (8 ^ 10) */
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, count = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
