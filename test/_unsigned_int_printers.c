#include "main.h"

/**
<<<<<<< HEAD
 * _print_binary - takes an unsigned int and prints it in binary notation
=======
 * print_binary - takes an unsigned int and prints it in binary notation
>>>>>>> tobi
 * @args: arguments list
 *
 * Return: number of characters printed
 */
<<<<<<< HEAD
int _print_binary(va_list args)
=======
int print_binary(va_list args)
>>>>>>> tobi
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(args, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
