#include "main.h"

/**
 * _print_rot13 - prints a string in rot13
 * @args: arguments list
 *
 * Return: number of chars printed
 */
int _print_rot13(va_list args)
{
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				_putchar(out[j]);
				count++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
