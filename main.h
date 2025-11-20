#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int write_char(char c);
int print_string(char *s);
int print_char_arg(va_list ap);
int print_number(int n);
int handle_format(const char *format, int *i, va_list ap);

#endif

