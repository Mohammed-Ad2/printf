#include "main.h"

/**
 * print_uint - Prints an unsigned integer.
 * @args: A pointer to va_list containing the unsigned integer to be printed.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int print_uint(va_list *args)
{
	int i = 0, j, n = va_arg(*args, unsigned int);
	char buffer[21];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);

	return (i);
}
