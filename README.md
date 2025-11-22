# _printf

> Custom implementation of the C standard `printf` function.

---

## Table of Contents
- [Description](#description)  
- [Features](#features)  
- [Supported Specifiers](#supported-specifiers)  
- [Project Structure](#project-structure)  
- [Installation](#installation)  
- [Usage](#usage)  
- [Function Details](#function-details)  
- [Flowchart](#flowchart)  
- [Man Page](#man-page)  
- [Authors](#authors)  
- [License](#license)  

---


## Description

`_printf` is a custom recreation of the C standard `printf` function.  
It formats and prints output according to a format string followed by a variable number of arguments.  

This project was developed as part of **Holberton School / ALX** curriculum to practice:

- Approaching a project  
- Group projects and collaboration  
- Pair programming  
- Flowchart design  
- Low-level implementation of standard C library functions  

---


## Features

- Handles basic format specifiers: `%c`, `%s`, `%d`, `%i`, `%%`  
- Prints output to `stdout`  
- Returns the number of characters printed  
- Written in C following **Betty coding style**  
- Includes a man page for documentation  
- No global variables, no more than 5 functions per file  

---


## Supported Specifiers

| Specifier | Description                      |
|-----------|----------------------------------|
| `%c`      | Print a single character         |
| `%s`      | Print a null-terminated string   |
| `%%`      | Print a literal percent sign     |
| `%d`, `%i`| Print a signed integer in base 10 |

> Unsupported specifiers are printed as `%` followed by the unknown character.  

---


## Project Structure

holbertonschool-printf/
│
├── _printf.c # Core printf function and format handler
├── formatnumprint.c # Helper functions: print numbers, chars, strings
├── _putchar.c # Writes a single character to stdout
├── main.h # Header file with function prototypes and includes
├── man_3_printf # Man page for _printf
└── README.md # This file

> Note: `main.c` is only for testing and should **not** be included in the repository root.

---


## Installation

1. Clone the repository:

```bash
git clone https://github.com/holbertonschool/holbertonschool-printf.git
cd holbertonschool-printf

2. Compile your project:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c


Usage

#include "main.h"

int main(void)
{
    int len;

    len = _printf("Hello %s! You are %d years old.\n", "Kevin", 25);
    return (0);
}

* _printf returns the number of characters printed (excluding the null byte).


Function Details

_printf.c

* _printf(const char *format, ...) – Main function that parses the format string and calls handle_format().

* handle_format(const char *format, int *i, va_list ap) – Handles each format specifier.

formatnumprint.c
* write_char(char c) – Writes a single character to stdout.

* print_string(char *s) – Writes a string, prints (null) if string is NULL.

* print_char_arg(va_list ap) – Extracts a char argument from va_list and prints it.

* print_number(int n) – Recursively prints integers, handling negatives.

_putchar.c

* _putchar(char c) – Writes a single character to stdout using write(1, &c, 1).


Flowchart

1. Parse the format string character by character.

2. If character is %, call handle_format():

* %c → print_char_arg()

* %s → print_string()

* %d / %i → print_number()

* %% → write_char('%')

* Unknown specifier → prints % followed by the unknown character

3. Otherwise, print the character directly using write_char().

4. Repeat until end of format string.

5. Return total number of characters printed.


Man Page

You can view the man page for _printf:

man ./man_3_printf


It includes:

* Name, synopsis, description

* Return values

* Example usage

* Notes on unsupported specifiers

* Authors


Authors

* Kevin Galarza Arzon

* Fabiola N Burgos Rodriguez

Holberton School – 2025
