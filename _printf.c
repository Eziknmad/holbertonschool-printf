#include "main.h"
#include <stdarg.h>

/**
 * handle_format - process a format specifier starting at format[i]
 * @format: format string
 * @i: pointer to index in format (points to % on entry)
 * @ap: va_list with arguments
 *
 * Return: number of characters printed for this specifier.
 */
int handle_format(const char *format, int *i, va_list ap)
{
	int cnt = 0;

	(*i)++;
	if (format[*i] == '\0')
	{
		cnt += write_char('%');
		return (cnt);
	}
	if (format[*i] == 'c')
	{
		cnt += print_char_arg(ap);
	}
	else if (format[*i] == 's')
	{
		char *s = va_arg(ap, char *);

		cnt += print_string(s);
	}
	else if (format[*i] == '%')
	{
		cnt += write_char('%');
	}
	else if (format[*i] == 'd' || format[*i] == 'i')
	{
		int num = va_arg(ap, int);

		cnt += print_number(num);
	}
	else
	{
		cnt += write_char('%');
		cnt += write_char(format[*i]);
	}
	return (cnt);
}

/**
 * _printf - produces output according to a format
 * @format: format string composed of zero or more directives
 *
 * Return: number of characters printed, or -1 if format is NULL.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	int i = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			count += write_char(format[i]);
			i++;
			continue;
		}

		count += handle_format(format, &i, ap);
		i++;
	}

	va_end(ap);
	return (count);
}

