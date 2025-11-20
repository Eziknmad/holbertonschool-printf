#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%i]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	len = _printf("Unknown:[%r]\n");
	_printf("Length: %d\n", len);
	_printf("Zero: %d\n", 0);
	_printf("INT_MIN: %d\n", INT_MIN);
	_printf("INT_MAX: %i\n", INT_MAX);

	return (0);
}
