#include "main.h"

int _printf(const char *format, ...);

/**
 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	buffer_t *op;
	va_list argz;
	int returnf;

	if (format == NULL)
		return (-1);
	op = init_buffer();
	if (op == NULL)
		return (-1);

	va_start(argz, format);

	returnf = run_printf(format, argz, op);

	return (returnf);
}
