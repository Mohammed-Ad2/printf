#include "main.h"
/**
 * help_printf - Handles printing according to conversion specifiers.
 * @format: String containing the format specifier directives.
 * @args: A pointer to va_list containing the arguments to be printed.
 * @f: Array of fmt structures
 *
 * Return: The length of what was printed.
 */
int help_printf(const char *format, va_list *args, fmt *f)
{
	int i, count = 0;

	while (*format != '\0')
	{
		i = 0;
		if (*format == '%')
		{
			format++;
			while (f[i].spec != '\0')
			{
				if (*format == f[i].spec)
				{
					count += f[i].print(args);
					break;
				}
				i++;
			}
			if (f[i].spec == '\0')
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	return (count);
}
