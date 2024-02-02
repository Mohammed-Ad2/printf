#include "main.h"
/**
 * print_int - Print an integer.
 * @args: A pointer to va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list *args)
{
	int count = 0, i = 0, j, n = va_arg(*args, int);
	char buffer[MAX_INT_BUFFER_SIZE];

	if (n == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		count += 2;
		return (print_int(147483648));
	}
	else if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	else if (n == 0)
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
	return (count + i);
}
