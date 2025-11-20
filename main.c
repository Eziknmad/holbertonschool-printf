#include <stdio.h>
#include "main.h"

/**
 * main - tests the _printf implementation
 *
 * Return: 0 on success
 */
int main(void)
{
        int len1, len2;

        len1 = _printf("Char:[%c]\n", 'H');
        len2 = printf("Char:[%c]\n", 'H');
        _printf("Len1: [%d]\n", len1);
        printf("Len2: [%d]\n", len2);

        len1 = _printf("String:[%s]\n", "Hello, world!");
        len2 = printf("String:[%s]\n", "Hello, world!");
        _printf("Len1: [%d]\n", len1);
        printf("Len2: [%d]\n", len2);

        len1 = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        _printf("Len1: [%d]\n", len1);
        printf("Len2: [%d]\n", len2);

        /* Unknown specifier demo */
        _printf("Unknown:[%r]\n");
        printf("Unknown:[%r]\n");

        /* NULL string check */
        _printf("Null string:[%s]\n", (char *)NULL);
        printf("Null string:[%s]\n", (char *)NULL);

        return (0);
}
