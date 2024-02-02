#include "main.h"

/**
 * _printf - Prints formatted output to the standard output stream.
 * @format: A pointer to a character string containing conversion specifiers.
 *          The format string can include zero or more directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	fmt f[] = {
		{'%', print_percent},
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL},
	};

	int count = 0;
	va_list args;

	va_start(args, format);

	count = help_printf(format, &args, f);

	va_end(args);
	return (count);
}
