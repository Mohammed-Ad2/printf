#include "main.h"

/**
 * print_char - Print a character.
 * @args: A pointer to va_list containing the character to be printed.
 *
 * Return: The number of characters printed (1 for a single character).
 */
int print_char(va_list *args)
{
	int count = 0;
	char c = va_arg(*args, int);

	count += _putchar(c);

	return (count);
}
