#include "main.h"

/**
 * print_percent - Print the '%' character.
 * @args: Unused in this case.
 *
 * Return: The number of characters printed (1 for the '%').
 */
int print_percent(va_list *args)
{
	(void)args;
	return (_putchar('%'));
}
