#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @i: function parameter
 * Return: always m
 */
int print_last_digit(int i)
{
	int m;

	m = i % 10;

	if (i < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
