#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned integer.
 * @args: A pointer to va_list containing the unsigned integer to be printed.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int print_binary(va_list *args)
{
	char buffer[MAX_BIN_BUFFER_SIZE];
	int i = 0, j, n = va_arg(*args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		buffer[i++] = (n & 1) + '0';
		n >>= 1;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);

	return (i);
}
