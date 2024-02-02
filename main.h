#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct formatter - A new struct type defining a printer.
 * @spec: A symbol representing a data type.
 * @print: A function pointer that prints a data
 *         type corresponding to symbol.
 */
typedef struct formatter
{
	char spec;
	int (*print)(va_list *);
} fmt;

/*MACROS*/
#define MAX_INT_BUFFER_SIZE 21
#define MAX_BIN_BUFFER_SIZE 33

/**************** PROTOTYPES ************/
int _putchar(char c);
int _printf(const char *format, ...);
int help_printf(const char *format, va_list *args, fmt *f);
int print_percent(va_list *args);
int print_int(va_list *args);
int print_string(va_list *args);
int print_char(va_list *args);
int print_binary(va_list *args);

#endif /* MAIN_H */
