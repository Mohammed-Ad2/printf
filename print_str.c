#include "main.h"

/**
 * print_string - Print a string.
 *
 * @args: A pointer to va_list containing the string to be printed.
 *        If the string is NULL, "(null)" is printed instead.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list *args)
{
	char *spec = va_arg(*args, char *);
	char *null_str = "(null)";
	int count = 0;

	if (spec == NULL)
	{
		while (*null_str != '\0')
			count += _putchar(*null_str++);
		return (count);
	}

	while (*spec != '\0')
		count += _putchar(*spec++);

	return (count);
}
