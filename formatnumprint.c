#include "main.h"
#include <stdarg.h>

/**
 * write_char - write a single character to stdout
 * @c: character to write
 *
 * Return: 1 on success.
 */
int write_char(char c)
{
	return ((int)write(1, &c, 1));
}

/**
 * print_string - write a string to stdout
 * @s: string to write (if NULL, writes "(null)")
 *
 * Return: number of characters written.
 */
int print_string(char *s)
{
	int len = 0;
	int written;

	if (s == NULL)
		s = "(null)";
	while (s[len])
		len++;
	written = (int)write(1, s, (size_t)len);
	return ((written < 0) ? 0 : written);
}

/**
 * print_char_arg - get a char from va_list and write it
 * @ap: va_list (positioned at the argument)
 *
 * Return: number of characters written (1).
 */
int print_char_arg(va_list ap)
{
	char c = (char)va_arg(ap, int);

	return (write_char(c));
}

/**
 * print_number - print an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += write_char('-');
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}

	if (num / 10)
		count += print_number(num / 10);

	count += write_char((num % 10) + '0');

	return (count);
}
