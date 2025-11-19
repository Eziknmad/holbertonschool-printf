#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

/**
* _printf - produces output according to a format
* @format: format string containning characters and conversions specifiers
*
* Return: number of characters printed (exclude the terminating null byte),
* or -1 on failure ( for example, if format is NULL).
*/
int _printf(const char *format, ...);

/**
 * _putchar - writes a single character to stdout
 * @c: character to print
 *
 * Return: 1 on success, or -1 on error.
 */
int _putchar(char c);

#endif
