#include "main.h"
/**
 * print_alphabet(void) - function that prints alphabets in lower case
 *
 * Return: always o;
 */
void print_alphabet(void)
{
	char i;
	for (i = '97' ; i <= '122' ; i++)
		_putchar(i);
	_putchar('\n');
}
